/*
** EPITECH PROJECT, 2019
** my_strchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strchr(const char *str, char chr)
{
    int len = 0;
    int i = 0;

    if (str && chr) {
        len = my_strlen(str);
        for (i = 0; (str[i] != chr) && (i < len); ++i);
        if (str[i] == chr)
            return ((char *) &(str[i]));
    }
    return (NULL);
}