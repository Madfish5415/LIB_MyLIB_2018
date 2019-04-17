/*
** EPITECH PROJECT, 2019
** test_my_strtod.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strtod, valid)
{
    char *param1 = "3.14";
    double actual = 0;
    double expected = 3.14;

    actual = my_strtod(param1);
    cr_assert_eq(actual, expected);
}