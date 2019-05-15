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
    int rvalue = 0;

    rvalue = my_fdputchar(chr, STDOUT);
    return (rvalue);
}