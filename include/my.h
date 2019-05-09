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
* @param array: <char **>
* @parblock
* Last array element must be a NULL pointer
* @endparblock
*/
void my_arrfree(void **arr);

/**
* @brief Calculates the size of an array
*
* @param array: <char **>
* @parblock
* Last array element must be a NULL pointer
* @endparblock
* @return Return the size of the array
*/
int my_arrlen(void **arr);

/**
* @brief Converts an integer to a string
*
* @param `nbr` Number: <int>
* @return An allocated string containing the number
*/
char *my_itoa(int nbr);

/**
* @brief Converts a long to a string
*
* @param `nbr` Number: <int>
* @return An allocated string containing the long number
*/
char *my_ltoa(long nbr);

/**
* @brief Prints a character
*
* @param `chr`: <char>
* @return `-1` if the write function failed, else return the character
*/
int my_putchar(int chr);

/**
* @brief Prints a list
*
* @param list: <char **>
* @parblock
* Last list element must be a NULL pointer
* @endparblock
*/
void my_putlist(char **list);

/**
* @brief Prints a string
*
* @param string
* @return `-1` if the write function failed, else return `0`
*/
int my_puts(const char *str);

/**
* @brief Adds the src string at the end of the dest string.
* Be aware to well alloc the dest string with the size of the src string.
*
* @param dest: <string>
* @param src: <string>
* @return the dest string
*/
char *my_strcat(char *dest, const char *src);

/**
* @brief Returns a pointer to the first occurrence of the chr character
* in the src string
*
* @param str: <string>
* @param chr: <char> Character to find
* @return Pointer to the first occurence of the character
*/
char *my_strchr(const char *str, char chr);

/**
* @brief Returns a pointer to the first occurrence of one of the chrs
* characters in the str string
*
* @param str: <string>
* @param chrs: <string> Pattern to find
* @return Pointer to the first occurence of one of the chrs
*/
char *my_strchrs(const char *str, const char *chrs);

/**
* @brief Deletes character sequences containing only the chrs characters
* and replaces them with the delim character
*
* @param str: <string>
* @param chrs: <string> Pattern to find
* @param delim: <char> Character to replace with
* @return Returns the string with the characters replaced
*/
char *my_strcln(const char *str, const char *chrs, char delim);

/**
* @brief Compare the strings str1 and str2
*
* @param str1: <string>
* @param str2: <string>
* @return '-1' if str1 < str2 or '1' if str1 > str2 and '0' if their equal
*/
int my_strcmp(const char *str1, const char *str2);

/**
* @brief Copies the src string into the dest string
* Be aware to alloc the dest string
*
* @param dest: <string>
* @param src: <string>
* @return the string that was passed in src argument
*/
char *my_strcpy(char *dest, const char *src);

/**
* @brief Duplicates the str string and returns it
*
* @param str: <string>
* @return a new string allocated with the size of 'str'
*/
char *my_strdup(const char *str);

/**
* @brief Checks if a string could be a double
*
* @param str: <string>
* @return
*/
int my_strisd(const char *str);

/**
* @brief Checks if a string could be an integer
*
* @param str: <string>
* @return '1' if the string is a number, '0' if it isn't
*/
int my_strisi(const char *str);

/**
* @brief Checks if a string could be a long
*
* @param str: <string>
* @return '1' if the string is a long, '0' if it isn't
*/
int my_strisl(const char *str);

/**
* @brief Calculates the length of a string
*
* @param str: <string>
* @return the length of string
*/
int my_strlen(const char *str);

/**
* @brief Returns an allocated string with the dest string concatenated with
* the src string
*
* @param dest: <string>
* @param src: <string>
* @return an allocated string concatened with the two strings passed as argument
*/
char *my_strmcat(const char *dest, const char *src);

/**
* @brief Returns a pointer to the last occurrence of the chr character
* in the src string
*
* @param str: <string>
* @param chr: <char>
* @return a pointer to the last occurence of the chr in the string
*/
char *my_strrchr(const char *str, char chr);

/**
* @brief Replace each chr character in the str string by the rpl
* character
*
* @param str: <string>
* @param chr: <char>
* @param rpl: <char>
* @return the string with the character replaced by the 'rpl' character
*/
char *my_strrpl(char *str, char chr, char rpl);

/**
* @brief Returns a pointer to the last occurrence of the search substring
* in the src string
*
* @param str: <string>
* @param search: <string>
* @return a pointer to the last occurrence of the substring searched
*/
char *my_strrstr(const char *str, const char *search);

/**
* @brief Returns a string list cut by each character in the delim list
*
* @param str: <string>
* @param delim: <string>
* @return a <char **> with all the 'str' separated by the delim character
*/
char **my_strsplit(char *str, const char *delim);

/**
* @brief Returns a pointer to the first occurrence of the search substring
* in the src string
*
* @param str: <string>
* @param search: <string>
* @return a pointer to the first occurence of the substring
*/
char *my_strstr(const char *str, const char *search);

/**
* @brief Converts a string into a double
*
* @param str: <string>
* @return a double
*/
double my_strtod(const char *str);

/**
* @brief Converts a string into an integer
*
* @param str: <string>
* @return a integer of the string
*/
int my_strtoi(const char *str);

/**
* @brief Parses a string into a sequence of tokens
*
* @param str: <string>
* @param delim: <string>
* @return
*/
char *my_strtok(char *str, const char *delim);

/**
* @brief Converts a string into a long integer
*
* @param str: <string>
* @return returns a long int
*/
long my_strtol(const char *str);

#endif // LIB_MYLIB_2018_MY_H
