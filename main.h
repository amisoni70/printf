<<<<<<< HEAD
#ifndef MAIN_HEADER
#define MAIN_HEADER
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> ami

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

<<<<<<< HEAD
int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
=======
int _printf(const char *format, ...);
int print_character(va_list ap);
int print_percentage(__attribute__((unused))va_list ap);
int print_string(va_list ap);
>>>>>>> ami

/**
  *struct specifier - structure to handle specifier
  *@specifier: specifier
  *@print: function to print specifier
  *
  *Description: FormatSpecifier structure
  */
typedef struct specifier
{
	char specifier;
	int (*print)(va_list);
} FormatSpecifier;

FormatSpecifier *get_specifiers();

#endif
