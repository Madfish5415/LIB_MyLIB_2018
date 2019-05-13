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
    int len = my_strlen(chrs);
    char *current = NULL;

    if (str && chrs) {
        for (int i = 0; i < len; ++i) {
            current = my_strchr(str, chrs[i]);
            strchrs = (strchrs) ? strchrs : current;
            if (current && strchrs && current < strchrs)
                strchrs = current;
        }
    }
    return (strchrs);
}