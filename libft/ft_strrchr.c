/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboisset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:19:13 by bboisset          #+#    #+#             */
/*   Updated: 2019/10/09 12:37:33 by bboisset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t count, size_t size)
{
    int *x;
    x = malloc(count*size);
    if (!x)
        return (0);
    ft_memset(x, '\0', count*size);
    return (x);
}
