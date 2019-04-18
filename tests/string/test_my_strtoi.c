/*
** EPITECH PROJECT, 2019
** test_my_strtoi.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strtoi, valid)
{
    char *param1 = "200";
    int actual = 0;
    int expected = 200;

    actual = my_strtoi(param1);
    cr_assert_eq(actual, expected);
}