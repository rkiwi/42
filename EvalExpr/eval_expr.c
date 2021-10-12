//
// Created by Kirill Kochemasow on 16/02/2020.
//

#include "eval_expr.h"
#include "func.h"

int     parsing_numbers(char **av)
{
    int num;

    while (**av == 32)
    {
        (*av)++;
    }
    if (**av == '(')
    {
        (*av)++;
        num = parse(av);
        if (**av == ')')
            (*av)++;
        return (num);
    }
    return (ft_atoi(av));
}

int     parsing_operand(char **av)
{
    int num;
    int num2;
    char operand;

    num = parsing_numbers(av);
    while (**av)
    {
        while (**av == ' ')
        {
            (*av)++;
        }
        operand = **av;
        if (operand != '/' && operand != '*' && operand != '%')
            return (num);
        (*av)++;
        num2 = parsing_numbers(av);
        if (operand == '/')
            num = num / num2;
        else if (operand == '*')
            num = num * num2;
        else
            num = num % num2;
    }
    return (num);
}

int     parse(char **av)
{
    int num;
    int num2;
    char operand;

    num = parsing_operand(av);
    while (**av)
    {
        while (**av == ' ')
        {
            (*av)++;
        }
        operand = **av;
        if (operand != '+' && operand != '-')
            return (num);
        (*av)++;
        num2 = parsing_operand(av);
        if (operand == '+')
            num = num + num2;
        else
            num = num - num2;
    }
    return (num);
}

int     eval_expr(char *av)
{
    int res;

    res = parse(&av);
    return (res);
}
