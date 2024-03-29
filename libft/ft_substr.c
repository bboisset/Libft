/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:07:30 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/17 21:16:05 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str2;
	size_t		i;
	size_t		j;
	size_t		max;
	size_t		s_len;

	s_len = (size_t)ft_strlen(s);
	max = (len > s_len + 1) ? s_len : len;
	max = (start > s_len) ? 0 : max;
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
