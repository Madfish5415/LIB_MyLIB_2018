/*
** EPITECH PROJECT, 2019
** my_strjcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strjcln_len(const char *str, const char *chrs, const char *jump)
{
    int len = 0;
    int words = 0;
    int i = 0;
    int offset = 0;

    while (str[i]) {
        for (; my_strchr(chrs, str[i]); ++i);
        words += (str[i]) ? 1 : 0;
        offset = my_strjump(&str[i], jump);
        i += offset;
        len += offset;
        for (; str[i] && !my_strchr(chrs, str[i]); ++i, ++len);
    }
    len += (words) ? words - 1 : 0;
    return (len);
}

char *my_strjcln(const char *str, const char *chrs, char delim,
        const char *jump)
{
    char *strjcln = NULL;
    int len = 0;
    int i = 0;
    int j = 0;

    if (!str || !chrs || !delim || !jump)
        return (NULL);
    len = my_strjcln_len(str, chrs, jump);
    strjcln = malloc(sizeof(char) * (len + 1));
    while (str[i] != '\0') {
        for (; my_strchr(chrs, str[i]); ++i);
        for (int k = i + my_strjump(&str[i], jump); i < k; ++i, ++j)
            strjcln[j] = str[i];
        for (; !my_strchr(chrs, str[i]) && (str[i] != '\0'); ++i, ++j)
            strjcln[j] = str[i];
        if (j < len)
            strjcln[j++] = delim;
    }
    strjcln[len] = '\0';
    return (strjcln);
}