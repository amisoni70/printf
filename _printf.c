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
	int printed_chars = 0, resul = 0;
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
			for (; spec->specifier; spec++)
			{
				if (spec->specifier == *format)
				{
					result = spec->print(args);
					if (result < 0)
						goto error;
					printed_chars += result;
					break;
				}
			}
			if (!spec->specifier)
			{
				printed_chars += write(1, "%", 1);
				if (*format)
					printed_chars += write(1, format, 1);
			}
		}
		else
		{
			result = write(1, format, 1);
			if (result < 0)
				goto error;
			printed_chars += result;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
	error:
		va_end(args);
		return (-1);
}
