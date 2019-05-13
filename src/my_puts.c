/*
** EPITECH PROJECT, 2019
** my_puts.c
** File description:
** LIB_MyLIB_2018
*/

#include <unistd.h>
#include "my.h"

int my_puts(const char *str)
{
    int len = 0;

    if (str) {
        len = my_strlen(str);
        if (write(STDOUT, str, len) == -1)
            return (0);
    }
    return (0);
}