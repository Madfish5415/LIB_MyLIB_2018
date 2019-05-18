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
    int rvalue = 0;
    int len = 0;

    if (!str)
        return (EOF);
    len = my_strlen(str);
    if (write(fd, str, len) == -1)
        rvalue = EOF;
    return (rvalue);
}