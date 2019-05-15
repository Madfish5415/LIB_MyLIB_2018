/*
** EPITECH PROJECT, 2019
** my_fdputlist.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

int my_fdputlist(char *const *list, int fd)
{
    int rvalue = (list) ? 0 : EOF;

    for (int i = 0; list && list[i] && (rvalue != EOF); ++i)
        rvalue = my_fdputs(list[i], fd);
    return (rvalue);
}