/*
** EPITECH PROJECT, 2019
** my_strtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strtok(char *str, const char *delim)
{
    char *strtok = NULL;
    static char *last = NULL;

    if (delim) {
        strtok = (!str && (str != last)) ? last : str;
        last = my_strchrs(strtok, delim);
        if (last) {
            *last = '\0';
            last += 1;
        }
    }
    return (strtok);
}