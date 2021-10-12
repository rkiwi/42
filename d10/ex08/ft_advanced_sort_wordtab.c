/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:50:50 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/11 20:50:52 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] < s2[i])
		{
			return (-1 * (s2[i] - s1[i]));
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (tab[i] != 0)
	{
		while (tab[j] != 0)
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(tab[i], tab[j]);
			j++;
		}
		i++;
		j = 1;
	}
}
