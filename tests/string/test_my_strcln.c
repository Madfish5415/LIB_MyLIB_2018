/*
** EPITECH PROJECT, 2019
** test_my_strcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcln, valid)
{
    char *param1 = "Hello,          World!";
    char param2 = ' ';
    char *actual = NULL;
    char *expected = "Hello, World!";

    actual = my_strcln(param1, param2);
    cr_assert_str_eq(actual, expected);
}