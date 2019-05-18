/*
** EPITECH PROJECT, 2019
** my_strjtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strjtok_jump(const char *str, const char *jump)
{
    int jump_i = 0;
    char *ptr = NULL;

    if (str && my_strrchr(jump, *str)) {
        ptr = my_strchr(str + 1, *str);
        jump_i = (ptr) ? ptr - str : my_strlen(str);
    }
    return (jump_i);
}

char *my_strjtok(char *str, const char *delim, const char *jump)
{
    char *strtok = NULL;
    static char *last = NULL;

    if (!delim || !jump)
        return (NULL);
    strtok = (!str && (str != last)) ? last : str;
    last = strtok;
    last += my_strjtok_jump(last, jump);
    last = my_strchrs(last, delim);
    if (last)
        *(last++) = '\0';
    return (strtok);
}