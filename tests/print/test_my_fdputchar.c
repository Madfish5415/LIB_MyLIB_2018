/*
** EPITECH PROJECT, 2019
** test_my_fdputchar.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "my.h"

Test(my_fdputchar, char_valid, .init = cr_redirect_stderr)
{
    char param1 = 'A';
    char *expected = "A";

    my_fdputchar(param1, STDERR);
    cr_assert_stderr_eq_str(expected);
}