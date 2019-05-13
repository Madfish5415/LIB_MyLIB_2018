/*
** EPITECH PROJECT, 2019
** test_my_strrchrs.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strrchrs, valid)
{
    char *param1 = "Hello, World!";
    char *param2 = "Wl";
    char *actual = NULL;
    char *expected = "ld!";

    actual = my_strrchrs(param1, param2);
    cr_assert_str_eq(actual, expected);
}