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
		{'b', print_unsigned_integer},
		{'r', print_revstr},
		{'\0', NULL}
	};

	return (specifiers);
}