#ifndef MAIN_HEADER
#define MAIN_HEADER

#define BUFFER_SIZE 1024

#include <ctype.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_character(va_list ap);
int print_string(va_list ap);
int print_percentage(va_list ap);
int print_integer(va_list args);
int print_binary(va_list args);
void write_with_buffer(int fd, const char *msg);
int print_custom_string(va_list args);
int print_unsigned_integer(va_list args);
int print_unsigned_octal(va_list args);
int print_unsigned_hexadecimal(va_list args);
int print_unsigned_hexadecimal_uppercase(va_list args);
int print_pointer(va_list args);
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
