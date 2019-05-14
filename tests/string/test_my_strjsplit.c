/*
** EPITECH PROJECT, 2019
** test_my_strjsplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strjsplit, valid)
{
    char param1[] = "This is-a \"super sentence\"";
    char *param2 = "- ";
    char *param3 = "\"";
    char **actual = NULL;
    char *expected1 = "This";
    char *expected2 = "is";
    char *expected3 = "a";
    char *expected4 = "\"super sentence\"";
    char *expected5 = NULL;

    actual = my_strjsplit(param1, param2, param3);
    cr_assert_str_eq(actual[0], expected1);
    cr_assert_str_eq(actual[1], expected2);
    cr_assert_str_eq(actual[2], expected3);
    cr_assert_str_eq(actual[3], expected4);
    cr_assert_eq(actual[4], expected5);
    my_arrfree((void **) actual);
}