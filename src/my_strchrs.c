/*
** EPITECH PROJECT, 2019
** my_strchrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strchrs(const char *str, const char *chrs)
{
    char *strchrs = NULL;
    char *current = NULL;

    if (!str || !chrs)
        return (NULL);
    for (int i = 0; chrs[i]; ++i) {
        current = my_strchr(str, chrs[i]);
        if (!strchrs)
            strchrs = current;
        if (current && strchrs && current < strchrs)
            strchrs = current;
    }
    return (strchrs);
}