/*
** EPITECH PROJECT, 2020
** putstr
** File description:
** putstr
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
