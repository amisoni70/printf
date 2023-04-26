#include "main.h"

/**
  *print_custom_string - print custom string
  *	Non printable characters (0 < ASCII value < 32 or >= 127
  *	are printed this way: \x, followed by the ASCII code value
  *	in hexadecimal (upper case - always 2 characters)
  *args: format parameter
  *Return: number of chars printed
  */

int print_custom_string(va_list args)
{
	const char *p, *str = va_arg(args, const char *);
	char hex[5] = {'\\', 'x', '0', '0', '\0'};
	int c = 0;

	if (!str)
		return (1);

	p = str;
	while (*p != '\0')
	{
		if (*p >= 32 && *p < 127)
		{
			write(1, p, 1);
			c++;
		}
		else
		{
			hex[2] = (*p >> 4) < 10 ? (*p >> 4) + '0' : (*p >> 4) - 10 + 'A';
			hex[3] = (*p & 0x0F) < 10 ? (*p & 0x0F) + '0' : (*p & 0x0F) - 10 + 'A';
			write(1, hex, 4);
			c += 4;
		}
		p++;
	}
	return (c);
}
