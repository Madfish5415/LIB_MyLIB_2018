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
    if (!str || !chr)
        return (NULL);
    for (int i = 0; str[i]; ++i)
        if (str[i] == chr)
            return ((char *) &(str[i]));
    return (NULL);
}