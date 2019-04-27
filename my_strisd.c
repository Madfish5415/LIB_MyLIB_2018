/*
** EPITECH PROJECT, 2019
** my_strisd.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strisd(const char *str)
{
    int strisd = (str) ? 1 : 0;
    int len = my_strlen(str);
    int dots = 0;
    int negative = 0;

    if (str) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; i < len; ++i) {
            dots += (str[i] == '.') ? 1 : 0;
            strisd = (dots <= 1) || IS_NBR(str[i]);
        }
    }
    return (strisd);
}