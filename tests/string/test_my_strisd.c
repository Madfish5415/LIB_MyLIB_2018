/*
** EPITECH PROJECT, 2019
** test_my_strisd.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strisd, valid)
{
    char *param1 = "3.14";
    int actual = 0;
    int expected = 1;

    actual = my_strisd(param1);
    cr_assert_eq(actual, expected);
}