/*
** EPITECH PROJECT, 2019
** my_strjsplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

static int my_strjsplit_jump(const char *str, const char *jump)
{
    int jump_i = 0;
    char *ptr = NULL;

    if (str && my_strrchr(jump, *str)) {
        ptr = my_strchr(str + 1, *str);
        jump_i = (ptr) ? ptr - str : my_strlen(str);
    }
    return (jump_i);
}

static int my_strjsplit_words(char *str, const char *delim, const char *jump)
{
    int words = 0;
    char *ptr = str;

    for (words = 0; ptr; ++words) {
        ptr += my_strjsplit_jump(ptr, jump);
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

    if (str && delim) {
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
    }
    return (strjsplit);
}