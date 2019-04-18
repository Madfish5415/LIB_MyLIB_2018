/*
** EPITECH PROJECT, 2019
** test_my_arrfree.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_arrfree, valid)
{
    char **param1 = malloc(sizeof(char *) * (5));
    int actual = 0;
    int expected = 0;

    param1[0] = malloc(sizeof(char) * (20));
    param1[1] = malloc(sizeof(char) * (20));
    param1[2] = malloc(sizeof(char) * (20));
    param1[3] = malloc(sizeof(char) * (20));
    param1[4] = NULL;
    my_arrfree((void **) param1);
    cr_assert_eq(actual, expected);
}