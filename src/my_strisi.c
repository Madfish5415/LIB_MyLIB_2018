/*
** EPITECH PROJECT, 2019
** my_strisi.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

bool_t my_strisi(const char *str)
{
    bool_t strisi = 0;
    int negative = 0;

    if (!str)
        return (FALSE);
    strisi = TRUE;
    negative = (str[0] == '-') ? 1 : 0;
    for (int i = negative; strisi && str[i]; ++i)
        strisi &= IS_NBR(str[i]);
    return (strisi);
}