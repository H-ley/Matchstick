/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    int temp = 0;

    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    } if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } if (nb >= 10) {
        temp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(temp + '0');
    } else if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    return (0);
}
