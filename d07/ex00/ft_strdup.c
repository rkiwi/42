/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:42:07 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/06 12:42:09 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *tmpdest;

	tmpdest = dest;
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

char	*ft_strdup(char *src)
{
	int			len;
	char		*p;

	p = NULL;
	len = 0;
	while (src[len] <= '\0')
	{
		len++;
	}
	if (len == 0)
		return (p);
	p = (char*)malloc(len);
	ft_strcpy(p, src);
	return (p);
}
