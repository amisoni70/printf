#include "main.h"

/**
  *_printf - prints output according to a format.
  *
  *@format: character string with 0 or more directives
  *
  *Return: returns number of characters printed
  *
  */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	FormatSpecifier *spec;

	if (!format)
		return (-1);

	spec = get_specifiers();
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (spec->specifier)
			{
				if (spec->specifier == *format)
				{
					printed_chars += spec->print(args);
					break;
				}
				spec++;
			}
			if (!spec->specifier)
			{
				printed_chars += write(1, "%", 1);
				if (*format)
				{
					printed_chars += write(1, format, 1);
				}
			}
		}
		else
		{
			printed_chars += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
