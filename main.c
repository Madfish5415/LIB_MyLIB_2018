/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main(void)
{
    char **jsplit = my_strjsplit("This is a \"simple test\" my friends!", " \t", "\"");

    my_putlist(jsplit);
    return (0);
}