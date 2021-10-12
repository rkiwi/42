/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:19:53 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/03 17:19:55 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	char *tmpdest;

	tmpdest = dest;
	while ((*src != '\0') && (n != 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	dest = tmpdest;
	return (dest);
}
