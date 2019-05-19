/*
** EPITECH PROJECT, 2019
** my_strtod.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

double my_strtod(const char *str)
{
    double strtod = 0;
    int negative = 0;
    int i = 0;
    int j = 0;
    double decimal = 0;

    if (!str || !my_strisd(str))
        return (0);
    negative = (str[0] == '-') ? 1 : 0;
    for (i = negative; str[i] && (str[i] != '.'); ++i)
        strtod = strtod * 10 + (str[i] - '0');
    for (i += (str[i] == '.'); str[i]; ++i, ++j)
        decimal = decimal * 10 + (str[i] - '0');
    for (i = 0; i < j; ++i)
        decimal /= 10;
    strtod += decimal;
    strtod *= (negative) ? -1 : 1;
    return (strtod);
}