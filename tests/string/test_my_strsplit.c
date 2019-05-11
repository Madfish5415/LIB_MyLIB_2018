/*
** EPITECH PROJECT, 2019
** test_my_strsplit.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strsplit, valid)
{
    char param1[] = "This is-a sentence";
    char *param2 = "- ";
    char **actual = NULL;
    char *expected1 = "This";
    char *expected2 = "is";
    char *expected3 = "a";
    char *expected4 = "sentence";
    char *expected5 = NULL;

    actual = my_strsplit(param1, param2);
    cr_assert_str_eq(actual[0], expected1);
    cr_assert_str_eq(actual[1], expected2);
    cr_assert_str_eq(actual[2], expected3);
    cr_assert_str_eq(actual[3], expected4);
    cr_assert_eq(actual[4], expected5);
    my_arrfree((void **) actual);
}