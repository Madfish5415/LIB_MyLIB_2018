/*
** EPITECH PROJECT, 2019
** test_my_strchrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strchrs, valid)
{
    char *param1 = "Hello, World!";
    char *param2 = "Wl";
    char *actual = NULL;
    char *expected = "llo, World!";

    actual = my_strchrs(param1, param2);
    cr_assert_str_eq(actual, expected);
}