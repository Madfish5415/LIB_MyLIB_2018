/*
** EPITECH PROJECT, 2019
** my_strjchrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjchrs(const char *str, const char *chrs, const char *jump)
{
    char *strjchrs = NULL;
    char *current = NULL;

    if (!str || !chrs)
        return (NULL);
    for (int i = 0; chrs[i]; ++i) {
        current = my_strjchr(str, chrs[i], jump);
        if (!strjchrs)
            strjchrs = current;
        if (current && strjchrs && current < strjchrs)
            strjchrs = current;
    }
    return (strjchrs);
}