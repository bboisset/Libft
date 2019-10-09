/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:45:29 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/09 15:25:20 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	char *m;

	m = (char*)b;
	i = 0;
	while (i < len)
	{
		m[i++] = c;
	}
	return (b);
}
