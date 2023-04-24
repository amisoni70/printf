#include "main.h"

/**
  *_printf - produces output according to a format.
  *
  *@format: parameter
  *
  *Return: returns number of characters printed
  *
  */

int _printf(const char *format, ...)
{
	va_list args;
	FormatSpecifier *spec;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			spec = get_specifiers();
			while (spec->specifier != '\0')
			{
				if (spec->specifier == *format)
				{
					spec->print(args);
					break;
				}
				spec++;
			}
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}

	va_end(args);
	return (0);
}
