/*
** EPITECH PROJECT, 2019
** test_my_strmcatf.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdio.h>
#include <criterion/criterion.h>
#include "my.h"

Test(my_strmcatf, valid)
{
    char *param1 = NULL;
    char *param2 = NULL;
    char *actual = NULL;
    char *expected = "Hello, World!";

    param1 = my_strdup("Hello, ");
    param2 = my_strdup("World!");
    actual = my_strmcatf(param1, param2, 3);
    cr_assert_str_eq(actual, expected);
    free(actual);
}