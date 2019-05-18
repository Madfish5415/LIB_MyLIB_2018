/*
** EPITECH PROJECT, 2019
** test_my_strcmp.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strcmp, equal)
{
    char *param1 = "Hello, World!";
    char *param2 = "Hello, World!";
    int actual = 0;
    int expected = 0;

    actual = my_strcmp(param1, param2);
    cr_assert_eq(actual, expected);
}

Test(my_strcmp, str1_greater)
{
    char *param1 = "Hello, World!";
    char *param2 = "Yellow World!";
    int actual = 0;
    int expected = 'H' - 'Y';

    actual = my_strcmp(param1, param2);
    cr_assert_eq(actual, expected);
}

Test(my_strcmp, str1_smaller)
{
    char *param1 = "Hello, World!";
    char *param2 = "Hello, Guys!";
    int actual = 0;
    int expected = 'W' - 'G';

    actual = my_strcmp(param1, param2);
    cr_assert_eq(actual, expected);
}