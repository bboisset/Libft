/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:12:23 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/16 17:44:55 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_sep(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
		if (str[i++] == c)
			count++;
	return (count);
}

static int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	dest[i] = '\0';
	return (j);
}

char		**prepare_array(char const *str, char c)
{
	int		i;
	int		j;
	int		mem;
	char	**array;

	i = 0;
	j = 0;
	mem = 0;
	if (!(array = ft_calloc((count_sep(str, c) + 2), sizeof(char *))))
		return (0);
	while (str[i] != '\0')
	{
		mem++;
		if (str[i++] == c)
		{
			if (!(array[j++] = ft_calloc(mem, sizeof(char))))
				return (0);
			mem = 0;
		}
	}
	if (!(array[j] = ft_calloc(mem, sizeof(char))))
		return (0);
	return (array);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		mem;
	char	**array;

	i = 0;
	j = 0;
	mem = 0;
	array = prepare_array(s, c);
	while (s[i] != '\0')
	{
		mem++;
		if (s[i++] == c)
		{
			ft_strlcpy(array[j], s + i - mem, mem);
			mem = 0;
			j++;
		}
	}
	if (s[i] == '\0')
		ft_strlcpy(array[j], s + i - mem, mem + 1);
	return (array);
}
