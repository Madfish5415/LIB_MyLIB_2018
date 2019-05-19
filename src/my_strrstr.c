/*
** EPITECH PROJECT, 2019
** my_strrstr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strrstr(const char *str, const char *search)
{
    int last = 0;

    if (!str || !search)
        return (NULL);
    last = my_strlen(str) - 1;
    for (int i = last, j = 0; i >= 0; --i) {
        for (j = 0; search[j] && (search[j] == str[i + j]); ++j);
        if (!search[j])
            return ((char *) &(str[i]));
    }
    return (NULL);
}