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

#include "mydefs.h"

// == Prototypes ==

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
* @return the size of the array
*/
int my_arrlen(void **arr);

/**
* @brief Prints chr on fd
*
* @param chr: <char>
* @param fd: <int>
* @return -1 if the write function failed, else return the character
*/
int my_fdputchar(int chr, int fd);

/**
* @brief Prints list on fd
*
* @param list: <char **>
* @param fd: <int>
* @parblock
* Last list element must be a NULL pointer
* @endparblock
* @return -1 if the write function failed, else return 0
*/
int my_fdputlist(char *const *list, int fd);

/**
* @brief Prints str on fd
*
* @param str: <char *>
* @param fd: <int>
* @return -1 if the write function failed, else return 0
*/
int my_fdputs(const char *str, int fd);

/**
* @brief Converts an integer to a string
*
* @param nbr: <int>
* @return an allocated string of nbr
*/
char *my_itoa(int nbr);

/**
* @brief Converts a long to a string
*
* @param nbr: <int>
* @return an allocated string of nbr
*/
char *my_ltoa(long nbr);

/**
* @brief Fill the first n bytes of the memory area pointed to by ptr with the
* chr character
*
* @param ptr: <void *>
* @param chr: <int>
* @param n: <size_t>
* @return ptr
*/
void *my_memset(void *ptr, int chr, size_t n);

/**
* @brief Prints chr
*
* @param chr: <char>
* @return -1 if the write function failed, else return the character
*/
int my_putchar(int chr);

/**
* @brief Prints list
*
* @param list: <char **>
* @parblock
* Last list element must be a NULL pointer
* @endparblock
* @return -1 if the write function failed, else return 0
*/
int my_putlist(char *const *list);

/**
* @brief Prints str
*
* @param str: <char *>
* @return -1 if the write function failed, else return 0
*/
int my_puts(const char *str);

/**
* @brief Adds the src string at the end of the dest string.
* Be aware to well alloc the dest string with the size of the src string.
*
* @param dest: <char *>
* @param src: <char *>
* @return dest
*/
char *my_strcat(char *dest, const char *src);

/**
* @brief Returns a pointer to the first occurrence of the chr character
* in the src string
*
* @param str: <char *>
* @param chr: <char> Character to find
* @return a pointer to the first occurence of the character
*/
char *my_strchr(const char *str, char chr);

/**
* @brief Returns a pointer to the first occurrence of one of the chrs
* characters in the str string
*
* @param str: <char *>
* @param chrs: <char *> Characters to find
* @return a pointer to the first occurence of one of the chrs characters
*/
char *my_strchrs(const char *str, const char *chrs);

/**
* @brief Deletes character sequences containing only the chrs characters
* and replaces them with the delim character
*
* @param str: <char *>
* @param chrs: <char *> Characters to find
* @param delim: <char> Delimiter to replace with
* @return str with the characters replaced
*/
char *my_strcln(const char *str, const char *chrs, char delim);

/**
* @brief Compare the strings str1 and str2
*
* @param str1: <char *>
* @param str2: <char *>
* @return a negative number if str1 < str2, positive number if str1 > str2
* and 0 if their equal
*/
int my_strcmp(const char *str1, const char *str2);

/**
* @brief Copies the src string into the dest string
* Be aware to alloc the dest string
*
* @param dest: <char *>
* @param src: <char *>
* @return dest
*/
char *my_strcpy(char *dest, const char *src);

/**
* @brief Duplicates the str string
*
* @param str: <char *>
* @return an allocated string of str
*/
char *my_strdup(const char *str);

/**
* @brief Duplicates the str string from start to end, end not included
*
* @param str: <char *>
* @param start: <char *>
* @param end: <char *>
* @return  an allocated string containing the str part
*/
char *my_strduprg(const char *str, const char *start, const char *end);

/**
* @brief Extracts the substring between start and end from the str string
*
* @param str: <char *>
* @param start: <char *>
* @param end: <char *>
* @return an allocated string containing the substring
*/
char *my_strextrct(const char *str, const char *start, const char *end);

/**
* @brief Checks if a string could be a double
*
* @param str: <char *>
* @return 1 if str is a double, otherwise 0
*/
bool_t my_strisd(const char *str);

/**
* @brief Checks if a string could be an integer
*
* @param str: <char *>
* @return 1 if str is an integer, otherwise 0
*/
bool_t my_strisi(const char *str);

/**
* @brief Checks if a string could be a long
*
* @param str: <char *>
* @return 1 if str is a long, otherwise 0
*/
bool_t my_strisl(const char *str);

/**
* @brief Same as my_strchr, but avoid characters contained between one of the
* jump characters
*
* @param str: <char *>
* @param chr: <char>
* @param jump: <char *>
* @return
*/
char *my_strjchr(const char *str, char chr, const char *jump);

/**
* @brief Same as my_strchrs, but avoid characters contained between one of the
* jump characters
*
* @param str: <char *>
* @param chrs: <char *>
* @param jump: <char *>
* @return
*/
char *my_strjchrs(const char *str, const char *chrs, const char *jump);

/**
* @brief Same as my_strcln, but does not clean the string contained between
* one of the jump characters
*
* @param str: <char *>
* @param chrs: <char *>
* @param delim: <char *>
* @param jump: <char *>
* @return
*/
char *my_strjcln(const char *str, const char *chrs, char delim,
        const char *jump);

/**
* @brief Same as my_strsplit, but does not split the string contained between
* one of the jump characters
*
* @param str: <char *>
* @param delim: <char *>
* @param jump: <char *>
* @return
*/
char **my_strjsplit(const char *str, const char *delim, const char *jump);

/**
* @brief Same as my_strssplit, but does not split the string contained between
* one of the jump characters
*
* @param str: <char *>
* @param sdelim: <char **>
* @param jump: <char *>
* @return
*/
char **my_strjssplit(const char *str, char *const *sdelim, const char *jump);

/**
* @brief Same as my_strstok, but does not parse the string contained between
* one of the jump characters
*
* @param str: <char *>
* @param sdelim: <char **>
* @param jump: <char *>
* @return
*/
char *my_strjstok(char *str, char *const *sdelim, const char *jump);

/**
* @brief Same as my_strstr, but avoid strings contained between one of the
* jump characters
*
* @param str: <char *>
* @param search: <char *>
* @param jump: <char *>
* @return
*/
char *my_strjstr(const char *str, const char *search, const char *jump);

/**
* @brief Same as my_strstrs, but avoid strings contained between one of the
* jump characters
*
* @param str: <char *>
* @param ssearch: <char **>
* @param jump: <char *>
* @param index: <int *>
* @return
*/
char *my_strjstrs(const char *str, char *const *ssearch, const char *jump,
        int *index);

/**
* @brief Same as my_strtok, but does not parse the string contained between
* one of the jump characters
*
* @param str: <char *>
* @param delim: <char *>
* @param jump: <char *>
* @return
*/
char *my_strjtok(char *str, const char *delim, const char *jump);

/**
* @brief Returns the number of characters to jump if the character pointed to
* by str is one of the jump characters
*
* @param str: <char *>
* @param jump: <char *>
* @return
*/
int my_strjump(const char *str, const char *jump);

/**
* @brief Calculates the length of a string
*
* @param str: <char *>
* @return the length of str
*/
int my_strlen(const char *str);

/**
* @brief Returns an allocated string with the dest string concatenated with
* the src string
*
* @param dest: <char *>
* @param src: <char *>
* @return an allocated string with the concatened strings passed as argument
*/
char *my_strmcat(const char *dest, const char *src);

/**
* @brief Same as my_strmcat, but free the target (1 = dest, 2 = src, 3 = all)
*
* @param dest: <char *>
* @param src: <char *>
* @param target: <int>
* @return an allocated string with the concatened strings passed as argument
*/
char *my_strmcatf(char *dest, char *src, int target);

/**
* @brief Returns a pointer to the last occurrence of the chr character
* in the src string
*
* @param str: <char *>
* @param chr: <char>
* @return a pointer to the last occurence of chr
*/
char *my_strrchr(const char *str, char chr);

/**
* @brief Returns a pointer to the last occurrence of one of the chrs
* characters in the str string
*
* @param str: <char *>
* @param chrs: <char *>
* @return
*/
char *my_strrchrs(const char *str, const char *chrs);

/**
* @brief Replace each chr character in the str string by the rpl
* character
*
* @param str: <char *>
* @param chr: <char>
* @param rpl: <char>
* @return str with the chr characters replaced by the rpl character
*/
char *my_strrpl(char *str, char chr, char rpl);

/**
* @brief Returns a pointer to the last occurrence of the search substring
* in the src string
*
* @param str: <char *>
* @param search: <char *>
* @return a pointer to the last occurrence of the substring searched
*/
char *my_strrstr(const char *str, const char *search);

/**
* @brief Returns a string array cut by each character in the delim list
*
* @param str: <char *>
* @param delim: <char *>
* @return an array with all the str parts cut by the delim characters
*/
char **my_strsplit(const char *str, const char *delim);

/**
* @brief Returns a string array cut by each string in the sdelim list
*
* @param str: <char *>
* @param sdelim: <char **>
* @return
*/
char **my_strssplit(const char *str, char *const *sdelim);

/**
* @brief Parses a string into a sequence of tokens using the sdelim string
* list
*
* @param str: <char *>
* @param sdelim: <char **>
* @return
*/
char *my_strstok(char *str, char *const *sdelim);

/**
* @brief Returns a pointer to the first occurrence of the search substring
* in the str string
*
* @param str: <char *>
* @param search: <char *>
* @return a pointer to the first occurence of the substring
*/
char *my_strstr(const char *str, const char *search);

/**
* @brief Returns a pointer to the first occurrence of one of the ssearch
* substrings in the str string
*
* @param str: <char *>
* @param ssearch: <char **>
* @param index: <int *>
* @return a pointer to the first occurence of one of the ssearch substrings
*/
char *my_strstrs(const char *str, char *const *ssearch, int *index);

/**
* @brief Converts a string into a double
*
* @param str: <char *>
* @return a double converted from str
*/
double my_strtod(const char *str);

/**
* @brief Converts a string into an integer
*
* @param str: <char *>
* @return an integer converted from str
*/
int my_strtoi(const char *str);

/**
* @brief Parses a string into a sequence of tokens using the delim character
* list
*
* @param str: <char *>
* @param delim: <char *>
* @return
*/
char *my_strtok(char *str, const char *delim);

/**
* @brief Converts a string into a long integer
*
* @param str: <char *>
* @return a long converted from str
*/
long my_strtol(const char *str);

#endif // LIB_MYLIB_2018_MY_H
