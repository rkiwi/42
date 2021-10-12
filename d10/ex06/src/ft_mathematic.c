/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mathematic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 22:42:29 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/10 22:42:31 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		ft_add(int i, int j)
{
	int res;

	res = 0;
	res = i + j;
	return (res);
}

int		ft_sub(int i, int j)
{
	int res;

	res = 0;
	res = i - j;
	return (res);
}

int		ft_mul(int i, int j)
{
	int res;

	res = 0;
	res = i * j;
	return (res);
}

int		ft_div(int i, int j)
{
	int res;

	res = 0;
	if (j == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	res = i / j;
	return (res);
}

int		ft_mod(int i, int j)
{
	int res;

	res = 0;
	if (j == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	res = i % j;
	return (res);
}
