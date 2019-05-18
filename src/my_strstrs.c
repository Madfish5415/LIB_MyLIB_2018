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
    char *ptr = NULL;

    for (int i = 0; str && ssearch && ssearch[i]; ++i) {
        ptr = my_strstr(str, ssearch[i]);
        if (ptr && (!strstrs || (ptr < strstrs)))
            strstrs = ptr;
        if (index && (strstrs == ptr))
            *index = i;
    }
    return (strstrs);
}