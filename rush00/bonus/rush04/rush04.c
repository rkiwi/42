/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:44:22 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/02 17:44:24 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putchar_twice(char c, char b);

void	check_one(int i, int j, char *first, char *second)
{
	int count;

	if (i == 1)
	{
		count = j - 1;
		ft_putchar(*first);
		ft_putchar('\n');
		while (count-- > 1)
		{
			ft_putchar(*second);
			ft_putchar('\n');
		}
		ft_putchar_twice(*(first + 1), '\n');
	}
	if (j == 1)
	{
		count = i - 1;
		ft_putchar(*first);
		while (count-- > 1)
		{
			ft_putchar(*second);
		}
		ft_putchar(*(first + 1));
		ft_putchar('\n');
	}
}

void	print_body(int i, int j, char *second)
{
	int count_i;
	int count_j;

	count_i = 1;
	count_j = 2;
	while (count_j < j)
	{
		ft_putchar(*second);
		count_i = 1;
		while ((count_i < i - 1))
		{
			ft_putchar(*(second + 1));
			count_i++;
		}
		ft_putchar(*second);
		ft_putchar('\n');
		count_j++;
	}
}

void	print_matrix(int i, int j, char *first, char *second)
{
	int count_i;

	count_i = 1;
	check_one(i, 1, first, second);
	print_body(i, j, second);
	ft_putchar(*(first + 1));
	while (count_i < i - 1)
	{
		ft_putchar(*second);
		count_i++;
	}
	ft_putchar(*first);
	ft_putchar('\n');
}

void	print_matrix_1x1(char *first)
{
	ft_putchar(*first);
}

void	rush(int i, int j)
{
	char first[2];
	char second[2];

	first[0] = 'A';
	first[1] = 'C';
	second[0] = 'B';
	second[1] = ' ';
	if ((i == 0) || (j == 0))
	{
		ft_putchar(' ');
	}
	else if ((i == 1) && (j == 1))
	{
		print_matrix_1x1(first);
	}
	else if ((i == 1) || (j == 1))
	{
		check_one(i, j, first, second);
	}
	else
	{
		print_matrix(i, j, first, second);
	}
}
