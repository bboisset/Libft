/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:07:30 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 16:47:53 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str2;
	int		i;
	int		j;
	int		max;

	max = (len > ft_strlen(s) + 1) ? ft_strlen(s) + 1 : len;
	str2 = ft_calloc(max, sizeof(char));
	if (!str2)
		return (0);
	i = start;
	j = 0;
	while (i < max + start - 1 && s[i] != '\0')
	{
		str2[j++] = s[i++];
	}
	return (str2);
}
