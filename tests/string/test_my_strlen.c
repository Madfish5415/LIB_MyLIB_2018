/*
** EPITECH PROJECT, 2019
** test_my_strlen.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strlen, valid)
{
    char *param1 = "FOUR";
    int actual = 0;
    int expected = 4;

    actual = my_strlen(param1);
    cr_assert_eq(actual, expected);
}