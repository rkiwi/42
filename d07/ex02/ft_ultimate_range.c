/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:34:39 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/06 17:34:41 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_func(int *p, int min, int len)
{
	int i;

	i = 0;
	while (0 <= len--)
	{
		*p = min;
		p++;
		i++;
		min++;
	}
	return (i);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int *p;
	int len;
	int *tmp;
	int i;

	tmp = NULL;
	p = tmp;
	len = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	else
	{
		len = max - min;
		p = (int*)malloc(sizeof(*p) * len + 1);
		i = ft_func(p, min, len);
		*p = '\0';
		p = tmp;
		*range = p;
	}
	return (i);
}
