/*
** EPITECH PROJECT, 2019
** my_strjstok.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjstok(char *str, char *const *sdelim, const char *jump)
{
    char *strjstok = NULL;
    static char *last = NULL;
    int index = 0;
    int len = 0;

    if (!sdelim)
        return (NULL);
    strjstok = (!str && (str != last)) ? last : str;
    last = strjstok;
    last = my_strjstrs(last, sdelim, jump, &index);
    len = my_strlen(sdelim[index]);
    if (last) {
        *(last++) = '\0';
        for (int i = 1; *last && (i < len); ++i, ++last);
    }
    return (strjstok);
}