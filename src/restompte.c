/*
** EPITECH PROJECT, 2019
** restart
** File description:
** compte
*/

#include "../include/my.h"

char *restart(int ch, char *stack, char *map)
{
    if (ch == ' ')
        my_strcpy(map, stack);
    return (map);
}

int *compt0(char *map)
{
    int *coord = malloc(sizeof(int) * 2);
    int a = 0;

    for (int i = 0; map[i] != '\0'; i++)
        if (map[i] == 'O') {
            coord[a] = i;
            a++;
        }
    return (coord);
}

char *search0(char *stack, char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (stack[i] == 'O' && map[i] == ' ')
            map[i] = 'O';
    }
    return (map);
}

char *pos0(int *coord, char *map)
{
    for (int i = 0; i != 3; i++)
        if (map[coord[i]] == ' ')
            map[coord[i]] = 'O';
    return (map);
}
