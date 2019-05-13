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

Test(my_strchr, null_param1)
{
    char *param1 = NULL;
    char param2 = 'o';
    char *ret = NULL;

    ret = my_strchr(param1, param2);
    cr_assert_null(ret);
}

Test(my_strchr, occurence_is_end_of_string)
{
    char *param1 = "Hello, World!";
    char param2 = 0;
    char *actual = NULL;

    actual = my_strchr(param1, param2);
    cr_assert_str_empty(actual);
}

Test(my_strchr, occurence_is_not_in_str)
{
    char *param1 = "abcd";
    char param2 = 'e';
    char *actual = NULL;

    actual = my_strchr(param1, param2);
    cr_assert_null(actual);
}