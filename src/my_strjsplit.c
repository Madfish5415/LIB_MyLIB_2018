/*
** EPITECH PROJECT, 2019
** my_strjsplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strjsplit_words(char *str, const char *delim, const char *jump)
{
    int words = 0;
    char *ptr = str;

    for (words = 0; ptr; ++words) {
        ptr += my_strjump(ptr, jump);
        ptr = my_strchrs(ptr, delim);
        ptr = (ptr) ? ptr + 1 : NULL;
    }
    return (words);
}

char **my_strjsplit(const char *str, const char *delim, const char *jump)
{
    char **strjsplit = NULL;
    char *dup = NULL;
    int words = 0;
    char *token = NULL;

    if (!str || !delim || !jump)
        return (NULL);
    dup = my_strdup(str);
    words = my_strjsplit_words(dup, delim, jump);
    strjsplit = malloc(sizeof(char *) * (words + 1));
    token = my_strjtok(dup, delim, jump);
    for (int i = 0; token; ++i) {
        strjsplit[i] = my_strdup(token);
        token = my_strjtok(NULL, delim, jump);
    }
    strjsplit[words] = NULL;
    free(dup);
    return (strjsplit);
}