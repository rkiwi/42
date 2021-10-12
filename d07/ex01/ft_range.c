/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:18:18 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/06 13:18:20 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *p;
	int len;
	int *tmp;

	tmp = NULL;
	p = tmp;
	len = 0;
	if (min >= max)
		return (0);
	else
	{
		len = max - min;
		p = (int*)malloc(sizeof(*p) * len + 1);
		while (0 < len--)
		{
			*p = min;
			p++;
			min++;
		}
		*p = '\0';
		p = tmp;
		return (p);
	}
}

int		main(void)
{
	ft_range(0, 0);
}
