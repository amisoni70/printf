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
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'\0', NULL}
	};

	return (specifiers);
}
