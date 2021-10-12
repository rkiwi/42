/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:44:58 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 19:45:00 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_checkUp(char *str)
{
	if ('A' <= str[i] && str[i] <= 'Z')
		return 0
	if ('a' <= str[i] && str[i] <= 'z')
		return 1
}

int		ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')
		{
			if ((str[i-1] == ' ') || (str[i-1] == '-') || (str[i-1] == '+'))
			{
				if *str
			}
			
			}
		}
		
	}
}
