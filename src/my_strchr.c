/*
** EPITECH PROJECT, 2019
** my_strchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strchr(const char *str, char chr)
{
    int i = 0;

    if (!str || !chr)
        return (NULL);
    for (i = 0; str[i] && (str[i] != chr); ++i);
    if (str[i] == chr)
        return ((char *) &(str[i]));
    return (NULL);
}