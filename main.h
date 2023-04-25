#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_character(va_list ap);
int print_percentage(va_list ap);
int print_string(va_list ap);
int print_integer(va_list args);
int print_binary(va_list args);
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
