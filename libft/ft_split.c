/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:12:23 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/16 19:47:44 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char sep)
{
	int count;
	int i = 0;

	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == sep)
			i++;
		if (s[i] != '\0' && s[i] != sep)
		{
			count++;
			while (s[i] != '\0' && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	*prepare_string(char const *s, char c)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int j;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (res == NULL)
	{
		free(res);
		return (NULL);
	}
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			res[i] = prepare_string(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
