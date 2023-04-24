#include "main.h"

void print_character(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
}


void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	while(*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}


void print_percent(va_list args)
{
	(void)args;

	write(1, "%", 1);
}


/*
int (*get_specifier(char *s))(const char *, ...)
{
	int l = 0;
	FormatSpecifier specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	while(specifiers[l] != '\0')
	{
		if (*s == *(specifiers[l]) && s[1] == '\0')
			return (specifiers[l].print);

		l++;
	}
	return (1);
}
*/
