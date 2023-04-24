#include "main.h"

FormatSpecifier *get_specifiers()
{
	static FormatSpecifier specifiers[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
        };
        return specifiers;
}
