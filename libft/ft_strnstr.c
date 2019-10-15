/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:30:41 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/15 13:13:12 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		needle_length;

	i = 0;
	needle_length = ft_strlen(needle);
	if (!needle_length)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(&haystack[i], &needle[0], needle_length) == 0)
				return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
