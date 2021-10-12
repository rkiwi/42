#include "func.h"

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
        return ;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int		ft_atoi(char **str)
{
    int		num;

    num = 0;
    while (**str >= '0' && **str <= '9')
    {
        num = num * 10 + (**str - '0');
        (*str)++;
    }
    return (num);
}