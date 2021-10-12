/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 23:29:37 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 23:29:39 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *tmpdest;

	tmpdest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb >= 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	dest = tmpdest;
	return (dest);
}
