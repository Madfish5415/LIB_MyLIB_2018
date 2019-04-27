/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** LIB_MyLIB_2018
*/

#ifndef LIB_MYLIB_2018_MY_H
#define LIB_MYLIB_2018_MY_H

#define EOF (-1)
#define IS_NBR(chr) (((chr) >= '0' && (chr) <= '9') ? 1 : 0)
#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)

void my_arrfree(void **arr);
int my_arrlen(void **arr);
char *my_itoa(int nbr);
char *my_ltoa(long nbr);
int my_putchar(int chr);
void my_putlist(char **list);
int my_puts(const char *str);
char *my_strcat(char *dest, const char *src);
char *my_strchr(const char *str, char chr);
char *my_strchrs(const char *str, const char *chrs);
char *my_strcln(char *str, char cln);
int my_strcmp(const char *str1, const char *str2);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *str);
int my_strisd(const char *str);
int my_strisi(const char *str);
int my_strisl(const char *str);
int my_strlen(const char *str);
char *my_strmcat(const char *dest, const char *src);
char *my_strrchr(const char *str, char chr);
char *my_strrpl(char *str, char chr, char rpl);
char *my_strrstr(const char *str, const char *search);
char **my_strsplit(char *str, const char *delim);
char *my_strstr(const char *str, const char *search);
double my_strtod(const char *str);
int my_strtoi(const char *str);
char *my_strtok(char *str, const char *delim);
long my_strtol(const char *str);

#endif // LIB_MYLIB_2018_MY_H
