/*
** EPITECH PROJECT, 2019
** my_fdputs.c
** File description:
** LIB_MyLIB_2018
*/

#include <unistd.h>
#include "my.h"

int my_fdputs(const char *str, int fd)
{
    int rvalue = (str) ? 0 : EOF;
    int len = 0;

    if (str) {
        len = my_strlen(str);
        if (write(fd, str, len) == -1)
            rvalue = EOF;
    }
    return (rvalue);
}