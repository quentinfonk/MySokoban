/*
** EPITECH PROJECT, 2019
** move
** File description:
** move
*/

#include "../include/my.h"

char *move_up(int p, char *map, int ch)
{
    int o = 0;

    for (; map[o] != '\n';)
        o++;
    o++;
    if (ch != KEY_UP)
        return (map);
    if (map[p - o] == '#' || map[p - o] == '\n' || map[p - o] == '\0')
        return (map);
    if (map[p - o] == 'X') {
        if (map[p - o - o ] == 'X')
            return (map);
        if (map[p - o - o ] == '#')
            return (map);
        map[p - o - o] = 'X';
    }
    map[p - o] = 'P';
    map[p] = ' ';
    return (map);
}

char *move_ri(int p, char *map, int ch)
{
    if (ch != KEY_RIGHT)
        return (map);
    if (map[p + 1] == '#' || map[p + 1] == '\n' || map[p + 1] == '\0')
        return (map);
    if (map[p + 1] == 'X') {
        if (map[p + 2] == 'X')
            return (map);
        if (map[p + 2] == '#')
            return (map);
        map[p + 2] = 'X';
    }
    map[p + 1] = 'P';
    map[p] = ' ';
    return (map);
}

char *move_le(int p, char *map, int ch)
{
    if (ch != KEY_LEFT)
        return (map);
    if (map[p - 1] == '#' || map[p - 1] == '\n' || map[p - 1] == '\0')
        return (map);
    if (map[p - 1] == 'X') {
        if (map[p - 2] == 'X')
            return (map);
        if (map[p - 2] == '#')
            return (map);
        map[p - 2] = 'X';
    }
    map[p - 1] = 'P';
    map[p] = ' ';
    return (map);
}

char *move_do(int p, char *map, int ch)
{
    int o = 0;

    for (; map[o] != '\n';)
        o++;
    o++;
    if (ch != KEY_DOWN)
        return (map);
    if (map[p + o] == '#' || map[p + o] == '\n' || map[p + o] == '\0')
        return (map);
    if (map[p + o] == 'X') {
        if (map[p + o + o ] == 'X')
            return (map);
        if (map[p + o + o ] == '#')
            return (map);
        map[p + o + o] = 'X';
    }
    map[p + o] = 'P';
    map[p] = ' ';
    return (map);
}
