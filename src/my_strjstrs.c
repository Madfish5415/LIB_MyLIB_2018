/*
** EPITECH PROJECT, 2019
** my_strjstrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjstrs(const char *str, char *const *ssearch, const char *jump,
        int *index)
{
    char *strjstrs = NULL;
    char *current = NULL;

    for (int i = 0; str && ssearch && ssearch[i]; ++i) {
        current = my_strjstr(str, ssearch[i], jump);
        if (!strjstrs || (current && (current < strjstrs)))
            strjstrs = current;
        if (index && (strjstrs == current))
            *index = i;
    }
    return (strjstrs);
}