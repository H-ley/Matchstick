/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** map
*/

#include "../include/my.h"

char **matches_map(int n)
{
    int i = 0, j = 0, k = 0;
    char **map = malloc(sizeof(char *) * (n + 1));

    for (i = 0; i < n; i++, k = 0) {
        map[i] = malloc(sizeof(char) * (2 * n));
        for (j = 0; j < n - 1 - i; j++) map[i][k++] = ' ';
        for (j = 0; j < 2 * i + 1; j++) map[i][k++] = '|';
        for (j = 0; j < n - 1 - i; j++) map[i][k++] = ' ';
        map[i][k] = 0;
    } map[i] = NULL;
    return (map);
}

void show_map(char **map, int n)
{
    int j = 0;

    for (j = 0; j < 2 * n + 1; j++) my_putchar('*');
    my_putchar('\n');
    for (int j = 0; map[j] != NULL; j++) {
        my_putchar('*');
        my_putstr(map[j]);
        my_putstr("*\n");
    } for (j = 0; j < 2 * n + 1; j++)
        my_putchar('*');
    my_putchar('\n');
}
