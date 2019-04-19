/*
** EPITECH PROJECT, 2019
** my_strtod.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

static int my_strtod_valid(const char *str)
{
    int valid = (str) ? 1 : 0;
    int negative = 0;

    if (str) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; valid && (str[i] != '\0'); ++i)
            valid = (str[i] == '.') || IS_NBR(str[i]);
    }
    return (valid);
}

double my_strtod(const char *str)
{
    double strtol = 0;
    double decimal = 0;
    int negative = 0;
    int i = 0;
    int j = 0;

    if (str && my_strtod_valid(str)) {
        negative = (str[0] == '-') ? 1 : 0;
        for (i = negative; (str[i] != '.') && (str[i] != '\0'); ++i)
            strtol = strtol * 10 + (str[i] - '0');
        i += (str[i] == '.') ? 1 : 0;
        for (i += 0; str[i] != '\0'; ++i, ++j)
            decimal = decimal * 10 + (str[i] - '0');
        for (i = 0; i < j; ++i)
            decimal /= 10;
        strtol += decimal;
        strtol *= (negative) ? -1 : 1;
    }
    return (strtol);
}