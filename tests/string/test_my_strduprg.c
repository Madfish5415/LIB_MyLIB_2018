/*
** EPITECH PROJECT, 2019
** test_my_strduprg.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strduprg, valid)
{
    char *param1 = "Hello, World!";
    char *param2 = &param1[0];
    char *param3 = &param1[5];
    char *actual = NULL;
    char *expected = "Hello";

    actual = my_strduprg(param1, param2, param3);
    cr_assert_str_eq(actual, expected);
    free(actual);
}