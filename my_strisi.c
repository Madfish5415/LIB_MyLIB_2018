/*
** EPITECH PROJECT, 2019
** my_strisi.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strisi(const char *str)
{
    int strisi = (str) ? 1 : 0;
    int len = my_strlen(str);
    int negative = 0;

    if (str) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; i < len; ++i)
            strisi = IS_NBR(str[i]);
    }
    return (strisi);
}