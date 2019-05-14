/*
** EPITECH PROJECT, 2019
** my_arrfree.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

void my_arrfree(void **arr)
{
    for (int i = 0; arr && arr[i]; ++i)
        free(arr[i]);
    free(arr);
}