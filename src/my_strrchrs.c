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
    int len = 0;
    char *current = NULL;

    if (str && chrs) {
        len = my_strlen(chrs);
        for (int i = 0; i < len; ++i) {
            current = my_strrchr(str, chrs[i]);
            strrchrs = (strrchrs) ? strrchrs : current;
            if (current && strrchrs && current > strrchrs)
                strrchrs = current;
        }
    }
    return (strrchrs);
}