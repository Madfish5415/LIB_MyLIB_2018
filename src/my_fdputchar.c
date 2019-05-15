/*
** EPITECH PROJECT, 2019
** my_fdputchar.c
** File description:
** LIB_MyLIB_2018
*/

#include <unistd.h>
#include "my.h"

int my_fdputchar(int chr, int fd)
{
    if (write(fd, &chr, 1) == -1)
        return (EOF);
    return (chr);
}