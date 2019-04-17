/*
** EPITECH PROJECT, 2019
** my_strchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strchr(const char *str, char chr)
{
    char *strchr = NULL;
    int i = 0;

    if (str) {
        for (i = 0; (str[i] != chr) && (str[i] != '\0'); ++i);
        strchr = (str[i] == chr) ? (char *) &(str[i]) : NULL;
    }
    return (strchr);
}