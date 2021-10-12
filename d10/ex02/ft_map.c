/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:26:34 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/10 15:26:36 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *list;
	int i;

	i = 0;
	list = (int*)malloc(sizeof(int) * length);
	while (i <= length)
	{
		list[i] = f(tab[i]);
		i++;
	}
	return (list);
}
