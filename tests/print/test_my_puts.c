/*
** EPITECH PROJECT, 2019
** test_my_puts.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "my.h"

Test(my_puts, string_valid, .init = cr_redirect_stdout)
{
    char *param1 = "ABCDEF";
    char *expected = "ABCDEF";

    my_puts(param1);
    cr_assert_stdout_eq_str(expected);
}

Test(my_puts, string_invalid_crash_test, .init = cr_redirect_stdout)
{
    char *param1 = NULL;

    my_puts(param1);
    cr_assert_eq(0, 0);
}