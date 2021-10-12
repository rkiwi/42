/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:43:40 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/12 19:43:42 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list_next;
	int		i;

	i = 0;
	list_next = begin_list;
	while (list_next->next != 0)
	{
		i++;
		list_next = list_next->next;
	}
	return (i);
}
