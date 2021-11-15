/*
** EPITECH PROJECT, 2019
** map-start
** File description:
** map-start
*/

#include "../include/my.h"

char *map_start(char *map, int ac, char **av)
{
    int fd;
    int o = 0;
    struct stat sb;

    map = malloc(sizeof(sb) + 1000);
    if (map == NULL)
        return NULL;
    fd = open(av[1], O_RDONLY);
    stat(av[1], &sb);
    o = sb.st_size;
    read(fd, map, o);
    close(fd);
    return (map);
}

int compte_p(char *map)
{
    int i = 0;

    while (map[i] != 'P')
        i++;
    return (i);
}
