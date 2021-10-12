/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:41:38 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/12 20:41:49 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*list_next;

	list_next = begin_list;
	while (list_next->next != 0)
	{
		list_next = list_next->next;
	}
	return (list_next);
}
