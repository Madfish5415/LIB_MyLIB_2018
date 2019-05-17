/*
** EPITECH PROJECT, 2019
** mydefs.h
** File description:
** LIB_MyLIB_2018
*/

#ifndef LIB_MYLIB_2018_MYDEFS_H
#define LIB_MYLIB_2018_MYDEFS_H

/**
* @file mydefs.h
* @brief Defines and typedefs of the MyLIB library
*/

// == Typedefs ==

typedef unsigned char bool_t;
typedef unsigned long size_t;

// == Values ==

// Boolean
#define FALSE (0)
#define TRUE (1)

// File descriptors
#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)

// Others
#define EOF (-1)

// Return values
#define FAILURE (84)
#define SUCCESS (0)

// == Utilities ==

#define IS_NBR(chr) (((chr) >= '0' && (chr) <= '9') ? 1 : 0)

#endif // LIB_MYLIB_2018_MYDEFS_H
