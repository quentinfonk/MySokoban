/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include "../include/my.h"

int comptestr(char *map)
{
    int a = 0;
    int o = 0;
    int i = 0;

    for (; map[i+o] != '\0'; i++){
        if (map[i+o] == '\n' && i > a) {
                o = o + i;
                a = i;
                i = 0;
        } else if (map[i+o] == '\n') {
            o = o + i;
            i = 0;
        }
    }
    return (a);
}
