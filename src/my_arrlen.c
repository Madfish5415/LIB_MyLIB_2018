/*
** EPITECH PROJECT, 2019
** my_arrlen.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

int my_arrlen(void **arr)
{
    int len = 0;

    for (len = 0; arr && arr[len]; ++len);
    return (len);
}