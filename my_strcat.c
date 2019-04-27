/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, const char *src)
{
    int len = my_strlen(dest);

    if (dest && src)
        for (int i = 0; i < len; ++i)
            dest[len + i] = src[i];
    return (dest);
}