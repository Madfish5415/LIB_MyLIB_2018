/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strcmp(const char *str1, const char *str2)
{
    int strcmp = 0;
    int len_s1 = my_strlen(str1);
    int len_s2 = my_strlen(str2);

    if (str1 && str2) {
        for (int i = 0; (i < len_s1) && (i < len_s2); ++i) {
            if (str1[i] != str2[i]) {
                strcmp = (str1[i] > str2[i]) ? 1 : -1;
                return (strcmp);
            }
        }
    }
    return (strcmp);
}