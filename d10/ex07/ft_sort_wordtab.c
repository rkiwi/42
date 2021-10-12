/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:04:55 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/11 19:04:56 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (tab[i] != 0)
	{
		while (tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j]) < 0)
				ft_swap(tab[i], tab[j]);
			j++;
		}
		i++;
		j = 1;
	}
}
