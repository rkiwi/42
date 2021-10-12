/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:36:22 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/13 13:36:24 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_argc(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing\n", 18);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		file;
	char	buff[0];

	if (check_argc(argc) == 1)
		return (1);
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			write(1, "open() error\n", 14);
			return (1);
		}
		while (read(file, buff, 1))
			write(1, &buff, 1);
		if (close(file) == -1)
		{
			write(1, "close() error\n", 15);
			return (1);
		}
	}
}
