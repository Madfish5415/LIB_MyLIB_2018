/*
** EPITECH PROJECT, 2019
** my_strstrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strstrs(const char *str, char *const *ssearch, int *index)
{
    char *strstrs = NULL;
    char *current = NULL;

    for (int i = 0; str && ssearch && ssearch[i]; ++i) {
        current = my_strstr(str, ssearch[i]);
        if (!strstrs || (current && (current < strstrs)))
            strstrs = current;
        if (index && (strstrs == current))
            *index = i;
    }
    return (strstrs);
}