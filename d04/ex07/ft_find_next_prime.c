/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 22:03:43 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/01 22:03:53 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int j;

	i = 3;
	if (nb % 2 == 0)
		return (0);
	j = (nb / 2) - 1;
	while ((i < j / 2) && (j > j / 2))
	{
		if ((nb % i == 0) || (nb % j == 0))
			return (0);
		i = i + 2;
		j = j - 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb % 2 == 0)
	{
		nb++;
	}
	while (ft_is_prime(nb) != 1)
	{
		nb = nb + 2;
	}
	return (nb);
}
