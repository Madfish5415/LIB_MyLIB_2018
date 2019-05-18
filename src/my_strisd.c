/*
** EPITECH PROJECT, 2019
** my_strisd.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

bool_t my_strisd(const char *str)
{
    bool_t strisd = 0;
    int len = 0;
    int dots = 0;
    int negative = 0;

    if (!str)
        return (FALSE);
    strisd = TRUE;
    len = my_strlen(str);
    negative = (str[0] == '-') ? 1 : 0;
    for (int i = negative; strisd && (i < len); ++i) {
        dots += (str[i] == '.') ? 1 : 0;
        strisd &= (dots <= 1) || IS_NBR(str[i]);
    }
    return (strisd);
}