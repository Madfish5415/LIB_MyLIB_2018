/*
** EPITECH PROJECT, 2019
** test_my_strrpl.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strrpl, valid)
{
    char *param1 = my_strdup("Hell0, W0rld!");
    char param2 = '0';
    char param3 = 'o';
    char *actual = NULL;
    char *expected = "Hello, World!";

    actual = my_strrpl(param1, param2, param3);
    cr_assert_str_eq(actual, expected);
}