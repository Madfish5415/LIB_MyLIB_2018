/*
** EPITECH PROJECT, 2019
** test_my_strstr.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strstr, valid)
{
    char *param1 = "Hello, World!";
    char *param2 = "World";
    char *actual = NULL;
    char *expected = "World!";

    actual = my_strstr(param1, param2);
    cr_assert_str_eq(actual, expected);
}