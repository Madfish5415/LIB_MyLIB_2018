/*
** EPITECH PROJECT, 2019
** my_strmcat.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strmcat(const char *dest, const char *src)
{
    char *strmcat = NULL;
    int len_d = 0;
    int len_s = 0;

    if (!dest || !src)
        return (NULL);
    len_d = my_strlen(dest);
    len_s = my_strlen(src);
    strmcat = malloc(sizeof(char) * (len_d + len_s + 1));
    strmcat = my_strcpy(strmcat, dest);
    strmcat = my_strcat(strmcat, src);
    return (strmcat);
}