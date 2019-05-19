/*
** EPITECH PROJECT, 2019
** my_ltoa.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_ltoa_digits(long nbr)
{
    int digits = (nbr == 0) ? 1 : 0;

    for (; nbr; nbr /= 10, ++digits);
    return (digits);
}

char *my_ltoa(long nbr)
{
    int digits = my_ltoa_digits(nbr);
    int negative = (nbr < 0) ? 1 : 0;
    char *itoa = malloc(sizeof(char) * (digits + negative + 1));

    nbr *= (negative) ? -1 : 1;
    itoa[0] = '-';
    for (int i = digits + negative - 1; i >= negative; --i, nbr /= 10)
        itoa[i] = (nbr % 10) + '0';
    itoa[digits + negative] = '\0';
    return (itoa);
}