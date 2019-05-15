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
    int rvalue = (str) ? 0 : EOF;

    if (str) {
        rvalue = my_fdputs(str, STDOUT);
    }
    return (rvalue);
}