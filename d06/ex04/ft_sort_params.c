/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:59:11 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/05 14:59:14 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(const char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return(0);
	}
	else if (*s1 > *s2)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int q;
	char *tmp;
	
	q = i + 1;
	tmp = 0;
	i = 1;
	j = argc;
	while (j >= 1)
	{
		while (q < '\0')
		{
			if (ft_strcmp(argv[i], argv[q]) == -1)
			{
				ft_strcmp(argv[i], argv[q]);
				continue;
			}
			q++;
		}
		i++;
		q = i + 1;
	}
			q = i + 1;
		i++;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}

