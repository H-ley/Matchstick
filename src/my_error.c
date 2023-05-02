/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** error
*/

#include "../include/my.h"

int check_error(int ac, char **av)
{
    if (ac != 3) return (84);
    for (int i = 1; av[i] != NULL; i++)
        for (int j = 0; av[i][j]; j++)
            if (av[i][j] < '0' || av[i][j] > '9')
                return (84);
    if (my_getnbr(av[1]) <= 1 || my_getnbr(av[1]) >= 100)
        return (84);
    if (my_getnbr(av[2]) <= 0)
        return (84);
    return (0);
}
