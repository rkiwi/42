/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:09:45 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/06 18:09:47 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *tmpdest;

	tmpdest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = tmpdest;
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*list;
	int		i;

	i = 1;
	list = NULL;
	list = (char*)malloc(sizeof(*list) * (argc * 2) + 1);
	if (list == 0)
		return (0);
	while (i < argc - 1)
	{
		ft_strcat(list, argv[i]);
		ft_strcat(list, "\n");
		i++;
	}
	ft_strcat(list, argv[i]);
	ft_strcat(list, "\0");
	return (list);
}
