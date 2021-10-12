/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:27:49 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/10 18:27:56 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == 0)
			i++;
		else if (f(tab[i], tab[i + 1]) < 0)
		{
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) > 0)
					return (0);
				i++;
			}
		}
		else if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
