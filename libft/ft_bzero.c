/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:17:55 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 16:59:57 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, size_t n)
{
	int		i;
	char	*m;

	m = (char*)s;
	i = 0;
	while (i < n)
	{
		m[i++] = '\0';
	}
	return (s);
}
