/*
** EPITECH PROJECT, 2021
** macthstick
** File description:
** matchstick
*/

#include "../include/my.h"

int end_game(char **map)
{
    int i = 1;

    for (i = 1; map[i] != NULL; i++) {
        if (count_matches(map[i]) != 0) return (84);
    } return (0);
}

char **remove_matches(int matches, int line, char **map)
{
    int j = piper(map[line]);

    for (int i = matches; i > 0; i--, j--)
        map[line][j] = ' ';
    return (map);
}
