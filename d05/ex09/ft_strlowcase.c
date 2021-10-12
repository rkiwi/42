/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:23:29 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 19:23:31 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while ('A' <= str[i] && str[i] <= 'Z')
	{
		str[i] += 32;
		i++;
	}
	return (str);
}
