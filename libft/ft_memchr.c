/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:35:20 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 20:01:40 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*m;
	unsigned char	x;

	i = 0;
	m = (char*)s;
	x = (unsigned char)c;
	while (m[i] != '\0' && i < n)
		if (m[i++] == x)
			return (m + i - 1);
	return (0);
}
