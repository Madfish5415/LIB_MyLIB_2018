/*
** EPITECH PROJECT, 2019
** my_strjssplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strjssplit_words(char *str, char *const *sdelim,
        const char *jump)
{
    int words = 0;
    char *ptr = str;
    int index = 0;
    int len = 0;

    for (words = 0; ptr; ++words) {
        ptr = my_strjstrs(ptr, sdelim, jump, &index);
        len = my_strlen(sdelim[index]);
        for (int i = 0; ptr && *ptr && (i < len); ++i, ++ptr);
    }
    return (words);
}

char **my_strjssplit(const char *str, char *const *sdelim, const char *jump)
{
    char **strjssplit = NULL;
    char *dup = NULL;
    int words = 0;
    char *token = NULL;

    if (!str || !sdelim)
        return (NULL);
    dup = my_strdup(str);
    words = my_strjssplit_words(dup, sdelim, jump);
    strjssplit = malloc(sizeof(char *) * (words + 1));
    token = my_strjstok(dup, sdelim, jump);
    for (int i = 0; token; ++i) {
        strjssplit[i] = my_strdup(token);
        token = my_strjstok(NULL, sdelim, jump);
    }
    strjssplit[words] = NULL;
    free(dup);
    return (strjssplit);
}