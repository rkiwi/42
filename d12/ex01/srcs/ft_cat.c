/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:10:50 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/13 16:10:53 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	input(void)
{
	char buffer;

	buffer = 0;
	while (read(0, &buffer, 1) > 0)
	{
		write(1, &buffer, 1);
	}
}

void	errno_check(char *arg)
{
	int i;

	i = 0;
	i = ft_strlen(arg);
	if (errno == ENOENT)
	{
		write(1, "cat: ", 5);
		write(1, arg, i);
		write(1, ": No such file or directory\n", 28);
	}
	else if (errno == EISDIR)
	{
		write(1, "cat: ", 5);
		write(1, arg, i);
		write(1, ": Is a directory\n", 17);
	}
	else if (errno == EACCES)
	{
		write(1, "cat: ", 5);
		write(1, arg, i);
		write(1, ": Permission denied\n", 20);
	}
	else
		write(1, "No message of desired type\n", 27);
}

int		main(int argc, char **argv)
{
	int		file;
	char	buff[0];
	int		i;

	i = 0;
	if (argc == 1)
		input();
	while (++i < argc)
	{
		if (*argv[i] == '-')
			input();
		file = open(argv[i], O_RDWR);
		if (file == -1)
			errno_check(argv[i]);
		else
		{
			while (read(file, buff, 1))
				write(1, &buff, 1);
			if (close(file) == -1)
				errno_check(argv[i]);
		}
	}
	return (0);
}
