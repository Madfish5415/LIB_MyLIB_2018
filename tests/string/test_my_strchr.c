/*
** EPITECH PROJECT, 2019
** test_my_strchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strchr, valid)
{
    char *param1 = "Hello, World!";
    char param2 = 'o';
    char *actual = NULL;
    char *expected = "o, World!";

    actual = my_strchr(param1, param2);
    cr_assert_str_eq(actual, expected);
}