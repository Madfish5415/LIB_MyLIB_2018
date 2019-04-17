/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** LIB_MyLIB_2018
*/

#ifndef LIB_MYLIB_2018_MY_H
#define LIB_MYLIB_2018_MY_H

#define EOF (-1)
#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)

char *my_itoa(int nbr);
char *my_ltoa(long nbr);
int my_putchar(int chr);
int my_puts(const char *str);
char *my_strchr(const char *str, char chr);
char *my_strchrs(const char *str, const char *chrs);
char *my_strcln(char *str, char cln);
char *my_strdup(const char *str);
int my_strlen(const char *str);
char *my_strrpl(char *str, char chr, char rpl);
char **my_strsplit(char *str, const char *delim);
char *my_strtok(char *str, const char *delim);

#endif // LIB_MYLIB_2018_MY_H
