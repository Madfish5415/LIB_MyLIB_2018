/*
** EPITECH PROJECT, 2019
** my_strcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strcln_len(const char *str, const char *chrs)
{
    int len = 0;
    int words = 0;
    int i = 0;

    while (str[i]) {
        for (; my_strchr(chrs, str[i]); ++i);
        words += (str[i]) ? 1 : 0;
        for (; str[i] && !my_strchr(chrs, str[i]); ++i, ++len);
    }
    len += (words) ? words - 1 : 0;
    return (len);
}

char *my_strcln(const char *str, const char *chrs, char delim)
{
    char *strcln = NULL;
    int len = 0;
    int i = 0;
    int j = 0;

    if (!str || !chrs || !delim)
        return (NULL);
    len = my_strcln_len(str, chrs);
    strcln = malloc(sizeof(char) * (len + 1));
    while (str[i] != '\0') {
        for (; my_strchr(chrs, str[i]); ++i);
        for (; !my_strchr(chrs, str[i]) && (str[i] != '\0'); ++i, ++j)
            strcln[j] = str[i];
        if (j < len)
            strcln[j++] = delim;
    }
    strcln[len] = '\0';
    return (strcln);
}