/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** my_getnbr
*/

#include "../include/my.h"

int my_getnbr(char const *str)
{
    int sign = 1, nbr = 0, i;

    for (int i = 0; str[i]; i++)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
            return (-666);
    for (i = 0; (str[i] == '+') || (str[i] == '-') ; i++)
        if (str[i] == '-')
            sign = sign * (-1);
    for (; (str[i] >= '0') && (str[i] <= '9') && (str[i] != '\0'); i++) {
        if ((nbr < 214748364) || ( nbr == 214748364 && str[i] <= '7')) {
            nbr = nbr * 10;
            nbr = nbr + str[i] - '0';
        } else
            return (0);
    } return (nbr * sign);
}
