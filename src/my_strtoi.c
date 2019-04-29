/*
** EPITECH PROJECT, 2019
** my_strtoi.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strtoi(const char *str)
{
    int strtoi = 0;
    int len = my_strlen(str);
    int negative = 0;

    if (str && my_strisi(str)) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; i < len; ++i)
            strtoi = strtoi * 10 + (str[i] - '0');
        strtoi *= (negative) ? -1 : 1;
    }
    return (strtoi);
}