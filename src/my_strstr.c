/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strstr(const char *str, const char *search)
{
    for (int i = 0, j = 0; str && search && str[i]; ++i) {
        for (j = 0; search[j] && (search[j] == str[i + j]); ++j) ;
        if (!search[j])
            return ((char *) &(str[i]));
    }
    return (NULL);
}