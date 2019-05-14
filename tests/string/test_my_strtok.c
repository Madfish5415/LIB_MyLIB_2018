/*
** EPITECH PROJECT, 2019
** test_my_strtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strtok, valid)
{
    char param1[] = "Hello, world!";
    char *param2 = " ";
    char *actual = NULL;
    char *expected1 = "Hello,";
    char *expected2 = "world!";

    actual = my_strtok(param1, param2);
    cr_assert_str_eq(actual, expected1);
    actual = my_strtok(NULL, param2);
    cr_assert_str_eq(actual, expected2);
}