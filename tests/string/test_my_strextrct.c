/*
** EPITECH PROJECT, 2019
** test_my_strextrct.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strextrct, valid)
{
    char *param1 = "This (word) will be extracted";
    char *param2 = "(";
    char *param3 = ")";
    char *actual = NULL;
    char *expected = "word";

    actual = my_strextrct(param1, param2, param3);
    cr_assert_str_eq(actual, expected);
    free(actual);
}