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

    for (words = 0; ptr != NULL; ++words) {
        ptr = my_strchrs(ptr, delim);
        ptr = (ptr) ? ptr + 1 : NULL;
    }
    return (words);
}

char **my_strsplit(char *str, const char *delim)
{
    char **strsplit = NULL;
    char *token = NULL;
    int words = 0;

    if (str && delim) {
        str = my_strdup(str);
        words = my_strsplit_words(str, delim);
        strsplit = malloc(sizeof(char *) * (words + 1));
        token = my_strtok(str, delim);
        for (int i = 0; token != NULL; ++i) {
            strsplit[i] = my_strdup(token);
            token = my_strtok(NULL, delim);
        }
        strsplit[words] = NULL;
        free(str);
    }
    return (strsplit);
}