/*
** EPITECH PROJECT, 2019
** my_strtol.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

static int my_strtol_valid(const char *str)
{
    int valid = (str) ? 1 : 0;
    int negative = 0;

    if (str) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; valid && (str[i] != '\0'); ++i)
            valid = IS_NBR(str[i]);
    }
    return (valid);
}

long my_strtol(const char *str)
{
    long strtol = 0;
    int negative = 0;

    if (str && my_strtol_valid(str)) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; str[i] != '\0'; ++i)
            strtol = strtol * 10 + (str[i] - '0');
        strtol *= (negative) ? -1 : 1;
    }
    return (strtol);
}