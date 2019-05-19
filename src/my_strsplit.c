/*
** EPITECH PROJECT, 2019
** my_strsplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strsplit_words(char *str, const char *delim)
{
    int words = 0;
    char *ptr = str;

    for (words = 0; ptr; ++words) {
        ptr = my_strchrs(ptr, delim);
        ptr = (ptr) ? ptr + 1 : NULL;
    }
    return (words);
}

char **my_strsplit(const char *str, const char *delim)
{
    char **strsplit = NULL;
    char *dup = NULL;
    int words = 0;
    char *token = NULL;

    if (!str || !delim)
        return (NULL);
    dup = my_strdup(str);
    words = my_strsplit_words(dup, delim);
    strsplit = malloc(sizeof(char *) * (words + 1));
    token = my_strtok(dup, delim);
    for (int i = 0; token; ++i) {
        strsplit[i] = my_strdup(token);
        token = my_strtok(NULL, delim);
    }
    strsplit[words] = NULL;
    free(dup);
    return (strsplit);
}