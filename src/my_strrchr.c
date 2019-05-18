/*
** EPITECH PROJECT, 2019
** my_strrchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strrchr(const char *str, char chr)
{
    int last = 0;

    if (!str || !chr)
        return (NULL);
    last = my_strlen(str) - 1;
    for (int i = last; i >= 0; --i)
        if (str[i] == chr)
            return ((char *) &(str[i]));
    return (NULL);
}