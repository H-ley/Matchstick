/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
