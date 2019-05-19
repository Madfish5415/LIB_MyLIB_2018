/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strcmp(const char *str1, const char *str2)
{
    int strcmp = 0;
    int i = 0;

    if (!str1 || !str2)
        return (0);
    for (i = 0; str1[i] && (str1[i] == str2[i]); ++i);
    strcmp = ((str1[i] - str2[i]));
    return (strcmp);
}