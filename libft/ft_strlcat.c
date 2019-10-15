/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:04:23 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/15 17:30:22 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	stock;

	i = 0;
	j = 0;
	stock = 0;
	while (i < dstsize && dst[i] != '\0')
		i++;
	while (src[stock] != '\0')
		stock++;
	if (dstsize <= 1)
		stock += dstsize;
	else
		stock += i;
	while (src[j] != '\0' && i + 1 < dstsize)
		dst[i++] = src[j++];
	if (i < dstsize)
		dst[i] = '\0';
	return (stock);
}
