/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:02:55 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/12 19:02:56 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list_next;

	list_next = 0;
	if (list_next->next == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		list_next = ft_create_elem(data);
		list_next->next = *begin_list;
		*begin_list = ft_create_elem(data);
	}
}
