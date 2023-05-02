/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** my_ai
*/

#include "../include/my.h"

int piper(char *str)
{
    int len = my_strlen(str) - 1;

    for (; str[len] != '|' && len > 0; len--);
    return (len);
}

void remove_ai_pipes(char **map, int line, int match)
{
    int j = piper(map[line]);

    for (int i = match; i > 0; i--, j--) map[line][j] = ' ';
    my_putstr("AI removed "), my_put_nbr(match);
    my_putstr(" match(es) from line "), my_put_nbr(line + 1);
    my_putchar('\n');
}

int h_pipes(char *str)
{
    int len = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == '|') len++;
    return (len);
}

int line_choice(char **map, int matches)
{
    int line = 0;

    while (map[line] != NULL) {
        if (h_pipes(map[line]) >= matches)
            break;
        line++;
    } return (line);
}

int ai_turn(char **map, int matches, int lines)
{
    int line, match, i;

    my_putstr("\nAI's turn...\n");
    while ((match = random() % 2 + 1) > matches);
    line = line_choice(map, match);
    if (line == lines || h_pipes(map[line]) < match) {
        match = 1;
        line = line_choice(map, match);
    } remove_ai_pipes(map, line, match);
    show_map(map, lines);
    return (0);
}
