/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(const char *str)
{
    char *strdup = NULL;
    int len = 0;

    if (!str)
        return (NULL);
    len = my_strlen(str);
    strdup = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; ++i)
        strdup[i] = str[i];
    strdup[len] = '\0';
    return (strdup);
}