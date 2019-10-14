/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:42:51 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 17:42:46 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	static int	data[2] = {0};
	char		*str;

	i = 0;
	j = 0;
	data = ft_memset(data, '0', 2);
	while (is_in_set(s1[i + data[0]], set))
		data[0]++;
	while (s1[i + data[0]] != '\0')
		i++;
	while (is_in_set(s1[(i - 1) + data[0] - data[1]], set))
		data[1]++;
	if (!(str = ft_calloc(i - data[0], sizeof(char))))
		return (0);
	while (j < i - data[0] - 1)
		str[j] = s1[j++ + data[0]];
	return (str);
}

static int	is_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
		if (c == set[i++])
			return (1);
	return (0);
}
