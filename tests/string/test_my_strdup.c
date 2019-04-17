/*
** EPITECH PROJECT, 2019
** test_my_strdup.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strdup, valid)
{
    char *param1 = "Hello, World!";
    char *actual = NULL;
    char *expected = "Hello, World!";

    actual = my_strdup(param1);
    cr_assert_str_eq(actual, expected);
}