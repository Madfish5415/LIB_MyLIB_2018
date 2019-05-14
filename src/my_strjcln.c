/*
** EPITECH PROJECT, 2019
** my_strjcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

static int my_strjcln_jump(const char *str, const char *jump)
{
    int jump_i = 0;
    char *ptr = NULL;

    if (str && my_strrchr(jump, *str)) {
        ptr = my_strchr(str + 1, *str);
        jump_i = (ptr) ? ptr - str : my_strlen(str);
    }
    return (jump_i);
}

static int my_strjcln_len(const char *str, const char *chrs, const char *jump)
{
    int len = 0;
    int words = 0;
    int i = 0;

    while (str && (str[i] != '\0')) {
        for (i += 0; my_strchr(chrs, str[i]); ++i) ;
        len += my_strjcln_jump(&str[i], jump);
        i += my_strjcln_jump(&str[i], jump);
        words += (str[i] != '\0') ? 1 : 0;
        for (i += 0; !my_strchr(chrs, str[i]) &&
            (str[i] != '\0'); ++i, ++len) ;
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

    if (str && chrs && delim && jump) {
        len = my_strjcln_len(str, chrs, jump);
        strjcln = malloc(sizeof(char) * (len + 1));
        while (str[i] != '\0') {
            for (; my_strchr(chrs, str[i]); ++i);
            for (int k = i + my_strjcln_jump(&str[i], jump); i < k; ++i, ++j)
                strjcln[j] = str[i];
            for (; !my_strchr(chrs, str[i]) && (str[i] != '\0'); ++i, ++j)
                strjcln[j] = str[i];
            if (j < len)
                strjcln[j++] = delim;
        }
        strjcln[len] = '\0';
    }
    return (strjcln);
}