/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:25:58 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 19:40:56 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*m;
	char	*l;

	i = 0;
	m = (char*)dst;
	l = (char*)src;
	while (i < n)
	{
		m[i] = l[i];
		if (l[i++] == c)
			return (dst);
	}
	return (dst);
}
