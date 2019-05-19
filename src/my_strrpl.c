/*
** EPITECH PROJECT, 2019
** my_strrpl.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

char *my_strrpl(char *str, char chr, char rpl)
{
    if (!str || !chr)
        return (str);
    for (int i = 0; str[i]; ++i)
        str[i] = (str[i] == chr) ? rpl : str[i];
    return (str);
}