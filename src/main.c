/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int matches, lines;
    char **map;

    if (check_error(ac, av) == 84) return (84);
    else {
        matches = my_getnbr(av[2]);
        lines = my_getnbr(av[1]);
        map = matches_map(lines);
        show_map(map, lines);
        return (game_loop(map, lines, matches));
        for (int i = 0; map[i] != NULL; i++) free(map[i]);
        free(map);
    } return (0);
}
