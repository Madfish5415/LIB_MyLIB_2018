/*
** EPITECH PROJECT, 2019
** my_strrpl.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

char *my_strrpl(char *str, char chr, char rpl)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; ++i)
        str[i] = (str[i] == chr) ? rpl : str[i];
    return (str);
}