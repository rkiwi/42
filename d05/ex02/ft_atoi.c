/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:21:05 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 14:21:14 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_zero(int j)
{
	if (j == 0)
	{
		return (1);
	}
	return (0);
}

int		ft_iterative_power(int nb, int j)
{
	int res;

	res = 1;
	if (ft_check_zero(j) == 1)
	{
		return (1);
	}
	else
	{
		while (j != 0)
		{
			res *= nb;
			j--;
		}
	}
	return (res);
}

int		ft_strlen(char *str)
{
	int j;

	j = 0;
	while (*str < 58 && 47 < *str)
	{
		str++;
		j++;
	}
	return (j);
}

int		ft_math(char *str)
{
	int len_string;
	int res;
	int i;

	i = 0;
	res = 0;
	len_string = ft_strlen(str);
	while (*str < 58 && 47 < *str)
	{
		res += (*(str++) - 48) * -ft_iterative_power(10, len_string-- - 1);
		i++;
		if (i == 20)
			return (-1);
	}
	return (-res);
}

int		ft_atoi(char *str)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	while (*str == '\t' || *str == ' ' || *str == '\r' || *str == '+')
	{
		str++;
	}
	if (*str == 45)
	{
		sign = -1;
		str++;
	}
	res = ft_math(str);
	return (sign * res);
}
