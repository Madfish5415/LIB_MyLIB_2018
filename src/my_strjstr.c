/*
** EPITECH PROJECT, 2019
** my_strjstr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjstr(const char *str, const char *search, const char *jump)
{
    if (!str || !search)
        return (NULL);
    for (int i = 0, j = 0; str[i]; ++i) {
        i += my_strjump(&str[i], jump);
        for (j = 0; search[j] && (search[j] == str[i + j]); ++j);
        if (!search[j])
            return ((char *) &(str[i]));
    }
    return (NULL);
}