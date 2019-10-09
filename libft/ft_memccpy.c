/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:25:58 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/09 16:00:30 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *m;
	char *l;

	i = 0;
	m = (char*)dst;
	l = (char*)src;
	while (i < n)
	{
		m[i] = l[i];
		if (l[i++] == c)
			return (dst);
	}
	return (dst);
}
