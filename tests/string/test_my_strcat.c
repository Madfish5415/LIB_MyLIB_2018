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