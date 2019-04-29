/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** LIB_MyLIB_2018
*/

#include <unistd.h>
#include "my.h"

int my_putchar(int chr)
{
    if (write(STDOUT, &chr, 1) == -1)
        return (EOF);
    return (chr);
}