/*
** EPITECH PROJECT, 2019
** test_my_ltoa.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_ltoa, number_positive)
{
    long param1 = 10000000000;
    char *actual = NULL;
    char *expected = "10000000000";

    actual = my_ltoa(param1);
    cr_assert_str_eq(actual, expected);
}

Test(my_ltoa, number_negative)
{
    long param1 = -10000000000;
    char *actual = NULL;
    char *expected = "-10000000000";

    actual = my_ltoa(param1);
    cr_assert_str_eq(actual, expected);
}