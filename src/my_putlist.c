/*
** EPITECH PROJECT, 2019
** my_putlist.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

int my_putlist(char *const *list)
{
    int rvalue = 0;

    if (!list)
        return (EOF);
    rvalue = my_fdputlist(list, STDOUT);
    return (rvalue);
}