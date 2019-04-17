/*
** EPITECH PROJECT, 2019
** test_my_strtol.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strtol, valid)
{
    char *param1 = "20000000000";
    long actual = 0;
    long expected = 20000000000;

    actual = my_strtol(param1);
    cr_assert_eq(actual, expected);
}