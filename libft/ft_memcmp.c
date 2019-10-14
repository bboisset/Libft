/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:09:00 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 17:24:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
?? Not checked
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  int i;
  char *str1;
  char *str2;

  str1 = (char*)s1;
  str2 = (char*)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] > str2[i]) ? 1 : -1;
		i++;
	}
	if (str1[i] == str2[i] || ((str1[i] == '\0' || str2[i] == '\0') && i < n))
		return (0);
	return (str1[i] > str2[i]) ? 1 : -1;
}
