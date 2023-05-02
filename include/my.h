/*
** EPITECH PROJECT, 2021
** match
** File description:
** my.h
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int check_error(int ac, char **av);
char **matches_map(int n);
void show_map(char **map, int n);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_putstr(char *str);
int my_strlen(char const *str);
char **remove_matches(int matches, int line, char **map);
int count_matches(char *map);
int rows(char **map);
int number_char(char **map, char c);
int end_game(char **map);
int line_error(int line, int size);
int matches_error(int matches, int match_lim, int all_matches);
char *my_get_input(void);
int get_line(int lines);
int get_matches(int matches, int line, char **map);
char **removing(int matches, int line, char **map, int lines);
int piper(char *str);
void remove_ai_pipes(char **map, int line, int match);
int h_pipes(char *str);
int line_choice(char **map, int matches);
int ai_turn(char **map, int match_lim, int lines);
int game_loop(char **map, int lines, int matches);
