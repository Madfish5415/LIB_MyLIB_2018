/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** LIB_MyLIB_2018
*/

#ifndef LIB_MYLIB_2018_MY_H
#define LIB_MYLIB_2018_MY_H

/**
* @file my.h
* @brief Functions prototypes of the MyLIB library
*/

#define EOF (-1)
#define IS_NBR(chr) (((chr) >= '0' && (chr) <= '9') ? 1 : 0)
#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)

/**
* @brief Free an array
*
* @param arr
* @parblock
* Last arr element must be a NULL pointer
* @endparblock
*/
void my_arrfree(void **arr);

/**
* @brief Calculates the size of an array
*
* @param arr
* @parblock
* Last arr element must be a NULL pointer
* @endparblock
* @return
*/
int my_arrlen(void **arr);

/**
* @brief Converts an integer to a string
*
* @param nbr
* @return an allocated string
*/
char *my_itoa(int nbr);

/**
* @brief Converts a long to a string
*
* @param nbr
* @return an allocated string
*/
char *my_ltoa(long nbr);

/**
* @brief Prints a character
*
* @param chr
* @return
*/
int my_putchar(int chr);

/**
* @brief Prints a list
*
* @param list
* @parblock
* Last list element must be a NULL pointer
* @endparblock
*/
void my_putlist(char **list);

/**
* @brief Prints a string
*
* @param str
* @return
*/
int my_puts(const char *str);

/**
* @brief Adds the src string at the end of the dest string
*
* @param dest
* @param src
* @return
*/
char *my_strcat(char *dest, const char *src);

/**
* @brief Returns a pointer to the first occurrence of the chr character
* in the src string
*
* @param str
* @param chr
* @return
*/
char *my_strchr(const char *str, char chr);

/**
* @brief Returns a pointer to the first occurrence of one of the chrs
* characters in the str string
*
* @param str
* @param chrs
* @return
*/
char *my_strchrs(const char *str, const char *chrs);

/**
* @brief Deletes character sequences containing only the chrs characters
* and replaces them with the delim character
*
* @param str
* @param chrs
* @param delim
* @return
*/
char *my_strcln(const char *str, const char *chrs, char delim);

/**
* @brief Compare the strings str1 and str2
*
* @param str1
* @param str2
* @return
*/
int my_strcmp(const char *str1, const char *str2);

/**
* @brief Copies the src string into the dest string
*
* @param dest
* @param src
* @return
*/
char *my_strcpy(char *dest, const char *src);

/**
* @brief Duplicates the str string and returns it
*
* @param str
* @return
*/
char *my_strdup(const char *str);

/**
* @brief Checks if a string could be a double
*
* @param str
* @return
*/
int my_strisd(const char *str);

/**
* @brief Checks if a string could be an integer
*
* @param str
* @return
*/
int my_strisi(const char *str);

/**
* @brief Checks if a string could be a long
*
* @param str
* @return
*/
int my_strisl(const char *str);

/**
* @brief Calculates the length of a string
*
* @param str
* @return
*/
int my_strlen(const char *str);

/**
* @brief Returns an allocated string with the dest string concatenated with
* the src string
*
* @param dest
* @param src
* @return
*/
char *my_strmcat(const char *dest, const char *src);

/**
* @brief Returns a pointer to the last occurrence of the chr character
* in the src string
*
* @param str
* @param chr
* @return
*/
char *my_strrchr(const char *str, char chr);

/**
* @brief Replace each chr character in the str string by the rpl
* character
*
* @param str
* @param chr
* @param rpl
* @return
*/
char *my_strrpl(char *str, char chr, char rpl);

/**
* @brief Returns a pointer to the last occurrence of the search substring
* in the src string
*
* @param str
* @param search
* @return
*/
char *my_strrstr(const char *str, const char *search);

/**
* @brief Returns a string list cut by each character in the delim list
*
* @param str
* @param delim
* @return
*/
char **my_strsplit(char *str, const char *delim);

/**
* @brief Returns a pointer to the first occurrence of the search substring
* in the src string
*
* @param str
* @param search
* @return
*/
char *my_strstr(const char *str, const char *search);

/**
* @brief Converts a string into a double
*
* @param str
* @return
*/
double my_strtod(const char *str);

/**
* @brief Converts a string into an integer
*
* @param str
* @return
*/
int my_strtoi(const char *str);

/**
* @brief Parses a string into a sequence of tokens
*
* @param str
* @param delim
* @return
*/
char *my_strtok(char *str, const char *delim);

/**
* @brief Converts a string into a long integer
*
* @param str
* @return
*/
long my_strtol(const char *str);

#endif // LIB_MYLIB_2018_MY_H
