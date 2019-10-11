/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:12:23 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/11 13:12:25 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **array;

    if (!(array = malloc((count_occurences(s, c) + 1)* sizeof(char *))))
      return (0);
    k = 0;
    i = 0;
    while (s[i] != '\0')
    {
      j = 0;
      while (s[i] != c && s[i++] != '\0')
      {
        j++;
        i++;
      }
      if (!(array[k] = ft_calloc(j + 1, sizeof(char))))
        return (0);
      ft_strcpy(array[k], &s[i - j], j);
      k++;
      if (s[i] != '\0')
        i++;
    }
    return (array);
}

int ft_strcpy(char *dst, char const *src, size_t max)
{
  int i;

  i = 0;
  while (src[i] != '\0' && i < max)
    dst[i] = src[i++];
  dst[i] = '\0';
  return (dst);
}

int count_occurences(char const *str,char c)
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
