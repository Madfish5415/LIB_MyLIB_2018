/*
** EPITECH PROJECT, 2019
** my_strtoi.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

static int my_strtoi_valid(const char *str)
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

int my_strtoi(const char *str)
{
    int strtoi = 0;
    int negative = 0;

    if (str && my_strtoi_valid(str)) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; str[i] != '\0'; ++i)
            strtoi = strtoi * 10 + (str[i] - '0');
        strtoi *= (negative) ? -1 : 1;
    }
    return (strtoi);
}