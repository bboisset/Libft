/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:41:17 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/15 18:25:15 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*m;
	char	*l;

	i = 0;
	m = (char*)dst;
	l = (char*)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		i = len - 1;
		while (i > 0)
		{
			m[i] = l[i];
			i--;
		}
	}
	else
		while (i < len)
		{
			m[i] = l[i];
			i++;
		}
	return (dst);
}
