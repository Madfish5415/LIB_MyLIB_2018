/*
** EPITECH PROJECT, 2019
** test_my_strcpy.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcpy, valid)
{
    char param1[] = "Hello, ";
    char *param2 = "World!";
    char *actual = NULL;
    char *expected = "World!";

    actual = my_strcpy(param1, param2);
    cr_assert_str_eq(actual, expected);
}