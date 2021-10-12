/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:48:23 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/12 17:48:25 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list_next;

	list_next = *begin_list;
	while (list_next->next != 0)
	{
		list_next = list_next->next;
	}
	list_next->next = ft_create_elem(data);
}
