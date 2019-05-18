/*
** EPITECH PROJECT, 2019
** my_strstok.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strstok(char *str, char *const *sdelim)
{
    char *strstok = NULL;
    static char *last = NULL;
    int index = 0;
    int len = 0;

    if (!sdelim)
        return (NULL);
    strstok = (!str && (str != last)) ? last : str;
    last = strstok;
    last = my_strstrs(last, sdelim, &index);
    len = my_strlen(sdelim[index]);
    if (last) {
        *(last++) = '\0';
        for (int i = 1; *last && (i < len); ++i, ++last);
    }
    return (strstok);
}