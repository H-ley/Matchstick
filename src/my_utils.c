/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** utils
*/

#include "../include/my.h"

int rows(char **map)
{
    int i = 0;

    for (i = 0; map[i] != NULL; i++);
    return (i);
}

int number_char(char **map, char c)
{
    int n = 0;

    for (int i = 0; map[i] != NULL; i++)
        for (int j = 0; map[i][j]; j++)
            if (map[i][j] == '|') n++;
    return (n);
}

int get_line(int lines)
{
    char *str;

    do {
        my_putstr("Line: ");
        if ((str = my_get_input()) == NULL) return (-1);
    } while (line_error(my_getnbr(str), lines) != 0);
    return (my_getnbr(str));
}

int get_matches(int matches, int line, char **map)
{
    char *str;

    my_putstr("Matches: ");
    if ((str = my_get_input()) == NULL) return (-1);
    if (matches_error(my_getnbr(str), matches, count_matches(map[line])) == 84)
        return (-2);
    return (my_getnbr(str));
}

char **removing(int matches, int line, char **map, int lines)
{
    my_putstr("Player removed ");
    my_put_nbr(matches);
    my_putstr(" Match(es) from line ");
    my_put_nbr(line), my_putchar('\n');
    map = remove_matches(matches, line - 1, map);
    show_map(map, lines);
    return (map);
}
