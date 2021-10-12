/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkiwi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 10:54:04 by rkiwi             #+#    #+#             */
/*   Updated: 2020/02/03 10:54:06 by rkiwi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	slice(int nb)
{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		slice(nb);
	}
}
