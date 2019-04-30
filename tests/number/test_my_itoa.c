/*
** EPITECH PROJECT, 2019
** test_my_itoa.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_itoa, number_positive)
{
    int param1 = 200;
    char *actual = NULL;
    char *expected = "200";

    actual = my_itoa(param1);
    cr_assert_str_eq(actual, expected);
}

Test(my_itoa, number_negative)
{
    int param1 = -200;
    char *actual = NULL;
    char *expected = "-200";

    actual = my_itoa(param1);
    cr_assert_str_eq(actual, expected);
}