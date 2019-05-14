/*
** EPITECH PROJECT, 2019
** test_my_strjtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strjtok, valid)
{
    char param1[] = "This is a \"super sentence\" !";
    char *param2 = " ";
    char *param3 = "\"";
    char *actual = NULL;
    char *expected1 = "This";
    char *expected2 = "is";
    char *expected3 = "a";
    char *expected4 = "\"super sentence\"";
    char *expected5 = "!";

    actual = my_strjtok(param1, param2, param3);
    cr_assert_str_eq(actual, expected1);
    actual = my_strjtok(NULL, param2, param3);
    cr_assert_str_eq(actual, expected2);
    actual = my_strjtok(NULL, param2, param3);
    cr_assert_str_eq(actual, expected3);
    actual = my_strjtok(NULL, param2, param3);
    cr_assert_str_eq(actual, expected4);
    actual = my_strjtok(NULL, param2, param3);
    cr_assert_str_eq(actual, expected5);
}