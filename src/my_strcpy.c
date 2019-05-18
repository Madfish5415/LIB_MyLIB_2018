/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    int len = 0;

    if (!dest || !src)
        return (dest);
    len = my_strlen(src);
    for (int i = 0; i < len; ++i)
        dest[i] = src[i];
    dest[len] = '\0';
    return (dest);
}