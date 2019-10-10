/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:36:21 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/10 19:36:25 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
  char *new_str;
  int i;
  int j;

  new_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
  i = 0;
  j = 0;
  if (!new_str)
    return (0);
  while (s1[j] != '\0')
    new_str[i++] = s1[j++];
  j = 0;
  while (s2[j] != '\0')
    new_str[i++] = s2[j++];
  return (new_str);
}
