/*
** EPITECH PROJECT, 2019
** my_puts.c
** File description:
** LIB_MyLIB_2018
*/

#include <unistd.h>
#include "my.h"

int my_puts(const char *s)
{
    int len = my_strlen(s);

    if (write(STDOUT, s, len) == -1)
        return (EOF);
    return (0);
}