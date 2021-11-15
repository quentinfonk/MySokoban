/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include "../include/my.h"

char *victory(int *coord, char *map)
{
    int i = 0;
    int a = 0;
    int x = 0;

    for (int o = 0; map[o] != '\0'; o++)
        if (map[o] == 'X')
            x++;
    for (; i != x; i++)
        if (map[coord[i]] == 'X')
            a++;
    if (i == a) {
        endwin();
        exit(0);
    }
    return (map);
}

char *start(char *map)
{
    int a = comptestr(map) - 1;
    int j = 0;
    int k = 0;
    char *map2 = malloc(sizeof(int) * 600);

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n') {
            for (; k < a ; k++, j++) {
                map2[j] = ' ';
            }
            map2[j] = '\n';
            k = 0;
        }
        else {
            map2[j] = map[i];
            k++;
        }
        j++;
    }
    map2[j] = '\0';
    return (map2);
}

int prog(char *map, int *coord, int p, char *stack)
{
    int ch = 0;

    clear();
    map = pos0(coord, map);
    p = compte_p(map);
    refresh();
    printw(map);
    ch = getch();
    map = restart(ch, stack, map);
    map = move_up(p, map, ch);
    map = move_do(p, map, ch);
    map = move_ri(p, map, ch);
    map = move_le(p, map, ch);
    refresh();
    printw(map);
    map = search0(stack, map);
    map = victory(coord, map);
    return (ch);
}

int window(int ac, char **av)
{
    WINDOW *boite;
    int ch;
    char *map;
    int p = 0;
    char *stack;
    int *coord = malloc(sizeof(int) * 2);

    map = map_start(map, ac, av);
    map = start(map);
    stack = malloc(sizeof(char) * (strlen(map) + 1));
    my_strcpy(stack, map);
    coord = compt0(map);
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, true);
    while (ch != 27) {
        ch = prog(map, coord, p, stack);
    }
    endwin();
    return (0);
}
