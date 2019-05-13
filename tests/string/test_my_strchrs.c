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

Test(my_strchrs, null_delimiter)
{
    char *param1 = "Hello, World!";
    char *param2 = NULL;
    char *actual = NULL;

    actual = my_strchrs(param1, param2);
    cr_assert_null(actual);
}

Test(my_strchrs, null_src)
{
    char *param1 = NULL;
    char *param2 = "e!";
    char *actual = NULL;

    actual = my_strchrs(param1, param2);
    cr_assert_null(actual);
}

Test(my_strchrs, empty_occurences)
{
    char *param1 = "Hello, Wolrd!";
    char *param2 = "";
    char *actual = NULL;

    actual = my_strchrs(param1, param2);
    cr_assert_null(actual);
}

Test(my_strchrs, first_occurence_not_in_str)
{
    char *param1 = "abcd";
    char *param2 = "ec";
    char *actual = NULL;
    char *expected = "cd";

    actual = my_strchrs(param1, param2);
    cr_assert_str_eq(actual, expected);
}