/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:03:50 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/14 17:46:37 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last_lst;

	last_lst = ft_lstlast(alst);
	if (new)
		last_lst->next = new;
}
