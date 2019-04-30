/*
** EPITECH PROJECT, 2019
** test_my_arrlen.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_arrlen, array_valid)
{
    char *param1[] = {"This", "is", "a", "sentence", NULL};
    int actual = 0;
    int expected = 4;

    actual = my_arrlen((void **) param1);
    cr_assert_eq(actual, expected);
}

Test(my_arrlen, array_null)
{
    char **param1 = NULL;
    int actual = 0;
    int expected = 0;

    actual = my_arrlen((void **) param1);
    cr_assert_eq(actual, expected);
}