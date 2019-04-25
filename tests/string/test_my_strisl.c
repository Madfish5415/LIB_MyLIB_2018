/*
** EPITECH PROJECT, 2019
** test_my_strisl.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strisl, valid)
{
    char *param1 = "20000000000";
    int actual = 0;
    int expected = 1;

    actual = my_strisl(param1);
    cr_assert_eq(actual, expected);
}