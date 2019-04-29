/*
** EPITECH PROJECT, 2019
** my_strcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strcln_len(const char *str, char cln)
{
    int len = 0;
    int words = 0;
    int i = 0;

    while (str && (str[i] != '\0')) {
        for (i += 0; str[i] == cln; ++i) ;
        words += (str[i] != '\0') ? 1 : 0;
        for (i += 0; (str[i] != cln) && (str[i] != '\0'); ++i, ++len) ;
    }
    len += (words) ? words - 1 : 0;
    return (len);
}

char *my_strcln(char *str, char cln)
{
    char *strcln = NULL;
    int len = my_strcln_len(str, cln);
    int j = 0;
    int k = 0;

    if (str) {
        strcln = malloc(sizeof(char) * (len + 1));
        while (str[j] != '\0') {
            for (j += 0; str[j] == cln; ++j);
            for (j += 0; (str[j] != cln) && (str[j] != '\0'); ++j)
                strcln[k++] = str[j];
            strcln[k++] = ' ';
        }
        strcln[len] = '\0';
    }
    return (strcln);
}