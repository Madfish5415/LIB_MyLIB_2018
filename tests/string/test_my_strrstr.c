/*
** EPITECH PROJECT, 2019
** test_my_strrstr.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strrstr, valid)
{
    char *param1 = "Hello, Milo!";
    char *param2 = "lo";
    char *actual = NULL;
    char *expected = "lo!";

    actual = my_strrstr(param1, param2);
    cr_assert_str_eq(actual, expected);
}