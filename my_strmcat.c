/*
** EPITECH PROJECT, 2019
** my_strmcat.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strmcat(char *dest, const char *src)
{
    char *strmcat = NULL;
    int len_d = my_strlen(dest);
    int len_s = my_strlen(src);

    if (dest && src) {
        strmcat = malloc(sizeof(char) * (len_d + len_s + 1));
        for (int i = 0; dest[i] != '\0'; ++i)
            strmcat[i] = dest[i];
        for (int i = 0; src[i] != '\0'; ++i)
            strmcat[len_d + i] = src[i];
        strmcat[len_d + len_s] = '\0';
    }
    return (strmcat);
}