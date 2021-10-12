/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:42:31 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/04 18:18:49 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check(char *to_find)
{
	int len;

	len = 0;
	while (to_find[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int len;

	len = 0;
	i = 0;
	j = 0;
	len = check(to_find);
	if (*to_find == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i] && to_find[j] != '\0' && str[i] != '\0')
		{
			i++;
			j++;
		}
		i -= j;
		if (len == j)
			return (&str[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%s", ft_strstr("Helloolol", "llo"));
	return (0);
}
