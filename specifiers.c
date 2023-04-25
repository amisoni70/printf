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
<<<<<<< HEAD:specifiers.c
		{'%', print_percentage},
=======
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
>>>>>>> sirln:specifier.c
		{'\0', NULL}
	};

	return (specifiers);
}
