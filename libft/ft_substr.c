/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:07:30 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/16 15:50:27 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	size_t	i;
	size_t	j;
	size_t	max;

	max = (len > (size_t)ft_strlen(s) + 1) ? (size_t)ft_strlen(s) : len;
	max = (start > max) ? 0 : max;
	str2 = ft_calloc(max + 1, sizeof(char));
	if (!str2)
		return (0);
	i = start;
	j = 0;
	while (i < max + start && s[i] != '\0')
	{
		str2[j++] = s[i++];
	}
	return (str2);
}
