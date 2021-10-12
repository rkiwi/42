/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:11:35 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/11 12:11:36 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		result(int a, int b, int (*f)(int, int))
{
	ft_putnbr(f(a, b));
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	char	sign[5];
	int		(*func[5])(int, int);
	int		i;

	i = -1;
	sign[0] = '+';
	sign[1] = '-';
	sign[2] = '*';
	sign[3] = '/';
	sign[4] = '%';
	func[0] = &ft_add;
	func[1] = &ft_sub;
	func[2] = &ft_mul;
	func[3] = &ft_div;
	func[4] = &ft_mod;
	if (argc != 4)
		return (0);
	while (i++ <= 5)
	{
		if (*argv[2] == sign[i])
		{
			result(ft_atoi(argv[1]), ft_atoi(argv[3]), func[i]);
		}
	}
	return (0);
}
