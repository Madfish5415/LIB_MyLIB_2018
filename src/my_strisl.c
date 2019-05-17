/*
** EPITECH PROJECT, 2019
** my_strisl.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

bool_t my_strisl(const char *str)
{
    bool_t strisl = 0;
    int len = 0;
    int negative = 0;

    if (str) {
        strisl = 1;
        len = my_strlen(str);
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; strisl && (i < len); ++i)
            strisl &= IS_NBR(str[i]);
    }
    return (strisl);
}