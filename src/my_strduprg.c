/*
** EPITECH PROJECT, 2019
** my_strduprg.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strduprg(const char *str, const char *start, const char *end)
{
    char *strduprg = NULL;
    int len = 0;

    if (!str || !start || !end || start >= end)
        return (NULL);
    len = end - start;
    strduprg = malloc(sizeof(char) * (len + 1));
    for (int i = 0; start[i] && (i < len); ++i)
        strduprg[i] = start[i];
    strduprg[len] = '\0';
    return (strduprg);
}