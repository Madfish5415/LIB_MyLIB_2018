/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

int main(void)
{
    char *itoa = my_itoa(200);
    char *strchr = my_strchr("Hello, World!", 'W');
    char *strcln = my_strcln("Hello,          World!", ' ');
    char *strdup = my_strdup("Hell0, W0rld!");

    my_putchar('A');
    my_puts("BCDEF");
    my_strlen("BCDEF");
    my_puts(itoa);
    my_puts(strchr);
    my_puts(strcln);
    my_puts(strdup);
    my_puts(my_strrpl(strdup, '0', 'o'));
}