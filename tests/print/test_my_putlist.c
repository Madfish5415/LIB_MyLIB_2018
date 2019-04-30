/*
** EPITECH PROJECT, 2019
** test_my_putlist.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "my.h"

Test(my_putlist, list_valid, .init = cr_redirect_stdout)
{
    char *param1[] = {"Hello", ", ", "World!", NULL};
    char *expected = "Hello, World!";

    my_putlist(param1);
    cr_assert_stdout_eq_str(expected);
}

Test(my_putlist, list_invalid_crash_test, .init = cr_redirect_stdout)
{
    char **param1 = NULL;

    my_putlist(param1);
    cr_assert_eq(0, 0);
}