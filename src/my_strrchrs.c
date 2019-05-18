/*
** EPITECH PROJECT, 2019
** my_strrchrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strrchrs(const char *str, const char *chrs)
{
    char *strrchrs = NULL;
    char *current = NULL;

    if (!str || !chrs)
        return (NULL);
    for (int i = 0; chrs[i]; ++i) {
        current = my_strrchr(str, chrs[i]);
        if (!strrchrs)
            strrchrs = current;
        if (current && strrchrs && current > strrchrs)
            strrchrs = current;
    }
    return (strrchrs);
}