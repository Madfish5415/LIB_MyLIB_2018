/*
** EPITECH PROJECT, 2019
** my_strjump.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

int my_strjump(const char *str, const char *jump)
{
    int offset = 0;
    char *ptr = NULL;

    if (!str || !jump || !*str || !my_strchr(jump, *str))
        return (0);
    ptr = my_strchr(str + 1, *str);
    offset = (ptr) ? ptr - str + 1 : my_strlen(str);
    return (offset);
}