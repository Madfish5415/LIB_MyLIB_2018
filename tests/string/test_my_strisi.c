/*
** EPITECH PROJECT, 2019
** test_my_strisi.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strisi, valid)
{
    char *param1 = "200";
    int actual = 0;
    int expected = 1;

    actual = my_strisi(param1);
    cr_assert_eq(actual, expected);
}