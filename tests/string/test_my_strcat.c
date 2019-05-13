/*
** EPITECH PROJECT, 2019
** test_my_strcat.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcat, valid)
{
    char param1[20] = "Hello, ";
    char *param2 = "World!";
    char *actual = NULL;
    char *expected = "Hello, World!";

    actual = my_strcat(param1, param2);
    cr_assert_str_eq(actual, expected);
}

Test(my_strcat, empty_dest_string)
{
    char dest[7] = "";
    char *src = "World!";
    char *actual = NULL;
    char *expected = "World!";

    actual = my_strcat(dest, src);
    cr_assert_str_eq(actual, expected);
}

Test(my_strcat, null_dest_string)
{
    char *dest = NULL;
    char *src = "World!";
    char *ret = NULL;

    ret = my_strcat(dest, src);
    cr_assert_null(ret);
}

Test(my_strcat, null_src_string)
{
    char *dest = "Hello";
    char *src = NULL;
    char *actual = NULL;
    char *expected = dest;

    actual = my_strcat(dest, src);
    cr_assert_str_eq(actual, expected);
}