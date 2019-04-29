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
    int len = my_strlen(str);
    double decimal = 0;
    int negative = 0;
    int i = 0;
    int j = 0;

    if (str && my_strisd(str)) {
        negative = (str[0] == '-') ? 1 : 0;
        for (i = negative; (str[i] != '.') && (i < len); ++i)
            strtod = strtod * 10 + (str[i] - '0');
        i += (str[i] == '.') ? 1 : 0;
        for (i += 0; i < len; ++i, ++j)
            decimal = decimal * 10 + (str[i] - '0');
        for (i = 0; i < j; ++i)
            decimal /= 10;
        strtod += decimal;
        strtod *= (negative) ? -1 : 1;
    }
    return (strtod);
}