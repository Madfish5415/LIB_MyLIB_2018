/*
** EPITECH PROJECT, 2019
** my_strssplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strssplit_words(char *str, char *const *sdelim)
{
    int words = 0;
    char *ptr = str;
    int index = 0;
    int len = 0;

    for (words = 0; ptr; ++words) {
        ptr = my_strstrs(ptr, sdelim, &index);
        len = my_strlen(sdelim[index]);
        for (int i = 0; ptr && *ptr && (i < len); ++i, ++ptr);
    }
    return (words);
}

char **my_strssplit(const char *str, char *const *sdelim)
{
    char **strssplit = NULL;
    char *dup = NULL;
    int words = 0;
    char *token = NULL;

    if (!str || !sdelim)
        return (NULL);
    dup = my_strdup(str);
    words = my_strssplit_words(dup, sdelim);
    strssplit = malloc(sizeof(char *) * (words + 1));
    token = my_strstok(dup, sdelim);
    for (int i = 0; token; ++i) {
        strssplit[i] = my_strdup(token);
        token = my_strstok(NULL, sdelim);
    }
    strssplit[words] = NULL;
    free(dup);
    return (strssplit);
}