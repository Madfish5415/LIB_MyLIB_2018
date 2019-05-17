/*
** EPITECH PROJECT, 2019
** my_memset.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

void *my_memset(void *ptr, int chr, size_t n)
{
    unsigned char *str = ptr;

    for (size_t i = 0; str && (i < n); ++i)
        str[i] = (unsigned char) chr;
    return (ptr);
}