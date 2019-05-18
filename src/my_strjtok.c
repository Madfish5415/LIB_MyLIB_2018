/*
** EPITECH PROJECT, 2019
** my_strjtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjtok(char *str, const char *delim, const char *jump)
{
    char *strtok = NULL;
    static char *last = NULL;

    if (!delim || !jump)
        return (NULL);
    strtok = (!str && (str != last)) ? last : str;
    last = strtok;
    last += my_strjump(last, jump);
    last = my_strchrs(last, delim);
    if (last)
        *(last++) = '\0';
    return (strtok);
}