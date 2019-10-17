/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:27:31 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 19:47:35 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_length(int nb)
{
	int		length;

	length = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb *= -1;
		length++;
	}
	while (nb > 0)
	{
		nb /= 10;
		length++;
	}
	return (length);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_number_length(n);
	if (!(str = ft_calloc(i + 1, sizeof(char))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
