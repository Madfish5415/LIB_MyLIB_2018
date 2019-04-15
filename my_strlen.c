/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strlen(const char *s)
{
    int len = 0;

    for (len = 0; s && (s[len] != '\0'); ++len) ;
    return (len);
}