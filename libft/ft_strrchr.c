/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:19:13 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 17:26:48 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*stock;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			stock = &s[i];
		i++;
	}
	if (stock)
		return (stock);
	return (0);
}
