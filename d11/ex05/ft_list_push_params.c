/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:01:05 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/12 21:01:07 by rkiwi            ###   ########.fr       */
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

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list_next;
	t_list	*temp;
	int		i;

	list_next = 0;
	temp = 0;
	list_next = temp;
	i = 1;
	while (i != ac)
	{
		ft_list_push_front(&list_next, av[i]);
		i++;
	}
	list_next = temp;
	return (list_next);
}
