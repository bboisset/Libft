/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:30:41 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/10 14:43:17 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int needleLength;

	i = 0;
	needleLength = ft_strlen(needle);
	if(!needleLength)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(&haystack[i], &needle[0], needleLength) == 0)
				return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
