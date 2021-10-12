/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:16:45 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/01 12:16:47 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;
	int nb_new;

	i = nb;
	nb_new = 1;
	if ((0 < nb) && (nb < 13))
	{
		if (i != 0)
		{
			nb_new = nb_new * i;
			i--;
			return (nb_new * ft_recursive_factorial(nb - 1));
		}
		if (i == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (nb_new);
}
