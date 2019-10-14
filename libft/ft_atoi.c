/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:17:00 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 18:28:09 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int negative;
	int number;

	i = 0;
	negative = 0;
	number = 0;
	while (!ft_isprint(str[i]))
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (ft_isdigit(str[i]) && str[i] != '\0')
		number = number * 10 + (str[i++] - '0');
	if (negative)
		number *= -1;
	return (number);
}
