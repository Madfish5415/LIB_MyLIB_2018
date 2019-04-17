/*
** EPITECH PROJECT, 2019
** test_my_strtok.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strtok, valid)
{
    char param1[] = "WARNING: IF YOU READ THIS"
                    "COMMENT IT ON GITHUB REVIEW";
    char *param2 = " :";
    char *actual = NULL;
    char *expected = "WARNING";

    actual = my_strtok(param1, param2);
    cr_assert_str_eq(actual, expected);
}