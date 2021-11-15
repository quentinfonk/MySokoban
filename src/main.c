/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "../include/my.h"

int error(char *map)
{
    int x = 0;
    int o = 0;
    int p = 0;
    int i = 0;

    for (; map[i] != '\0'; i++) {
        if (map[i] == 'X')
            x++;
        if (map[i] == 'O')
            o++;
        if (map[i] == 'P')
            p++;
        if (map[i] != 'P' && map[i] != 'X' && map[i] != '#' && map[i] != 'O'
            && map[i] != ' ' && map[i] != '\n' && map[i] != '\0')
            return (84);
    }
    if (i < 5)
        return (84);
    if (o != x || p >= 2)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    char *map;
    int x = 0;

    if (ac == 1 || av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n./my_sokoban map\nDESCRIPTION\nmap  ");
        my_putstr("file representing the warehouse map, containing ‘#’ ");
        my_putstr("for walls,\n‘P’ for the player, ‘X’ for boxes and ‘O’ ");
        my_putstr("for storage locations.\n");
        return (0);
    }
    map = map_start(map, ac, av);
    x = error(map);
    if (x == 84)
        return (84);
    window(ac, av);
    return (0);
}
