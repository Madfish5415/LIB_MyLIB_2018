/*
** EPITECH PROJECT, 2019
** test_my_strjcln.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_strjcln, valid)
{
    char *param1 = "This\t  \tis   a \"super   sentence\"   \t!";
    char *param2 = "\t ";
    char param3 = ' ';
    char *param4 = "\"";
    char *actual = NULL;
    char *expected = "This is a \"super   sentence\" !";

    actual = my_strjcln(param1, param2, param3, param4);
    cr_assert_str_eq(actual, expected);
    free(actual);
}