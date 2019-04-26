/*
** EPITECH PROJECT, 2019
** my_putlist.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

void my_putlist(char **list)
{
    for (int i = 0; list && (list[i] != NULL); ++i)
        my_puts(list[i]);
}