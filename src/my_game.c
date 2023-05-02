/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** game
*/

#include "../include/my.h"

int matches_error(int matches, int match_lim, int line_matches)
{
    if (matches < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected)\n");
        return (84);
    } if (matches == 0) {
        my_putstr("Error: ");
        my_putstr("you have to remove at least one match\n");
        return (84);
    } if (matches > match_lim) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(match_lim), my_putstr(" matches per turn\n");
        return (84);
    } if (matches > line_matches) {
        my_putstr("Error: "), my_putstr("not enough matches on this line\n");
        return (84);
    } return (0);
}

int line_error(int line, int size)
{
    if (line < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected)\n");
        return (84);
    } if ((line == 0) || (line > size)) {
        my_putstr("Error: ");
        my_putstr("this line is out of range\n");
        return (84);
    } return (0);
}

char *my_get_input(void)
{
    int c = 0;
    size_t size = 100;
    char *buffer = malloc(100);

    c = getline(&buffer, &size, stdin);
    if (c == -1) return (NULL);
    buffer[my_strlen(buffer) - 1] = 0;
    return (buffer);
}

int count_matches(char *str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '|')
            count++;
    return (count);
}

int game_loop(char **map, int lines, int matches)
{
    int mat, lin;

    while (1) {
        my_putstr("\nYour turn:\n");
        do {
            lin = get_line(lines);
            if (lin == -1) return (0);
            mat = get_matches(matches, lin - 1, map);
            if (mat == -1) return (0);
        } while (mat == -2);
        map = removing(mat, lin, map, lines);
        if (end_game(map) == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        } ai_turn(map, matches, lines);
        if (end_game(map) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (1);
        }
    }
}
