/*
** EPITECH PROJECT, 2019
** my_strextract.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strextrct(const char *str, const char *start, const char *end)
{
    char *strextrct = NULL;
    char *startp = NULL;
    char *endp = NULL;

    if (!str || !start || !end)
        return (NULL);
    startp = my_strstr(str, start);
    startp += (startp) ? my_strlen(start) : 0;
    endp = my_strstr(startp, end);
    strextrct = my_strduprg(str, startp, endp);
    return (strextrct);
}