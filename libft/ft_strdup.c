/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:45:42 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/10 18:56:33 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *strdup(const char *s1)
{
  int str_length;
  char *str2;
  int i;

  str_length = ft_strlen(s1);
  str2 = ft_calloc(str_length + 1, sizeof(char));
  if (!str2)
    return (0);
  i = 0;
  while (i <= str_length)
    str2[i] = s1[i++];
  return (str2);
}
