/*
** EPITECH PROJECT, 2019
** test_my_memset.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_memset, valid)
{
    char *param1 = NULL;
    char param2 = '*';
    size_t param3 = 10;
    int actual = 0;
    int expected = '*';

    param1 = malloc(param3);
    my_memset(param1, param2, param3);
    for (size_t i = 0; i < param3; ++i) {
        actual = param1[i];
        cr_assert_eq(actual, expected);
    }
    free(param1);
}