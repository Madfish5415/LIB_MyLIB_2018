/*
** EPITECH PROJECT, 2019
** my_arrdup.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char **my_arrdup(char **arr)
{
    char **arrdup = NULL;
    int len = 0;

    if (!arr)
        return (NULL);
    len = my_arrlen((void **) arr);
    arrdup = malloc(sizeof(char *) * (len + 1));
    for (int i = 0; i < len; ++i)
        arrdup[i] = my_strdup(arr[i]);
    arrdup[len] = NULL;
    return (arrdup);
}