#include "main.h"

/**
  *get_specifier - initialize an array of specifiers
  *
  *Return: return an array ofspecifiers
  */
FormatSpecifier *get_specifiers(void)
{
	static FormatSpecifier specifiers[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percentage},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'S', print_custom_string},
		{'u', print_unsigned_integer},
		{'o', print_unsigned_octal},
		{'x', print_unsigned_hexadecimal},
		{'X', print_unsigned_hexadecimal_uppercase},
		{'p', print_pointer},
		{'\0', NULL}
	};

	return (specifiers);
}
