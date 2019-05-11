/*
** EPITECH PROJECT, 2019
** test_my_strcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcln, valid)
{
    char *param1 = "Hello,\t\t    \t\tWorld!";
    char *param2 = "\t ";
    char param3 = ' ';
    char *actual = NULL;
    char *expected = "Hello, World!";

    actual = my_strcln(param1, param2, param3);
    cr_assert_str_eq(actual, expected);
    free(actual);
}