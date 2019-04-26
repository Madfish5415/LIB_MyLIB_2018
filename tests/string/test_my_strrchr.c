/*
** EPITECH PROJECT, 2019
** test_my_strrchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strrchr, valid)
{
    char *param1 = "Hello, World!";
    char param2 = 'o';
    char *actual = NULL;
    char *expected = "orld!";

    actual = my_strrchr(param1, param2);
    cr_assert_str_eq(actual, expected);
}