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
    int len_i = my_strlen(str);
    int len_j = my_strlen(search);

    for (int i = 0, j = 0; str && search && (i < len_i); ++i) {
        for (j = 0; (search[j] == str[i + j]) && (j < len_j); ++j) ;
        if (j == len_j)
            return ((char *) &(str[i]));
    }
    return (NULL);
}