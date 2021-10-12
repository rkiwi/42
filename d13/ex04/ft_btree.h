/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 21:34:42 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/14 21:34:44 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# define NULL 0

typedef struct				s_btree
{
	struct s_btree			*left;
	struct s_btree			*right;
	void					*item;
}							t_btree;

t_btree		*btree_create_node(void *item);

#endif
