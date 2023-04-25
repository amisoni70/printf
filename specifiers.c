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
		{'\0', NULL}
	};

	static const int num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);
	FormatSpecifier *copy = malloc(num_specifiers * sizeof(*copy));

	if (copy)
	{
		memcpy(copy, specifiers, num_specifiers * sizeof(*copy));
	}

	return (copy);
	/*return (specifiers);*/
}
