/*
** EPITECH PROJECT, 2019
** test_my_fdputs.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "my.h"

Test(my_fdputs, string_valid, .init = cr_redirect_stderr)
{
    char *param1 = "ABCDEF";
    char *expected = "ABCDEF";

    my_fdputs(param1, STDERR);
    cr_assert_stderr_eq_str(expected);
}

Test(my_fdputs, string_invalid_crash_test, .init = cr_redirect_stderr)
{
    char *param1 = NULL;
    int actual = 0;
    int expected = -1;

    actual = my_fdputs(param1, STDERR);
    cr_assert_eq(actual, expected);
}