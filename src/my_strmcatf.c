/*
** EPITECH PROJECT, 2019
** my_strmcatf.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strmcatf(char *dest, char *src, int target)
{
    char *strmcat = NULL;

    if (!dest || !src)
        return (NULL);
    strmcat = my_strmcat(dest, src);
    if ((target == 1) || (target == 3))
        free(dest);
    if ((target == 2) || (target == 3))
        free(src);
    return (strmcat);
}