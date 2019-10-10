/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:42:51 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/10 19:42:53 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
  char *new_str;
  int str1_length;
  int i;
  int j;
  int k;

  i = 0;
  j = ft_strlen(s1);
  k = 0;
  while (s1[i] != '\0' && s1[i] == set)// check entire set instead of single char
    i++;
  while (s1[j] >= 0 && s1[i] == set)// check entire set instead of single char
    j--;
  new_str = ft_calloc((j - i)+1, sizeof(char));
  if (!new_str)
    return (0);
  while (k < (j - i))
    new_str[k++] = s1[i++];
  return (new_str);
}
