/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:47:14 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/01 12:47:18 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_minus_one(int nb, int power)
{
	if (nb == -1)
	{
		if ((power / 2) == 0)
		{
			return (1);
		}
		return (-1);
	}
	else if
		(nb == 1)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (nb == 0)
	{
		return (0);
	}
}

int		ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	ft_check_minus_one(nb, power);
	i = nb;
	r = power;
	while (r != 1)
	{
		nb = nb * i;
		r--;
	}
	return (nb);
}
