#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_character(va_list args);
void print_string(va_list args);
void print_percent(va_list args);
void print_integer(va_list args);

typedef struct {
	char specifier;
	void (*print)(va_list);
} FormatSpecifier;

FormatSpecifier *get_specifiers();

#endif
