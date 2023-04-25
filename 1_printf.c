#include "main.h"

/**
 * print_integer - Prints an integer
 * @args: A list of arguments containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int sign = 1;
	char *buffer;
	int i = 0;
	int printed_chars = 0;

	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	/* Maximum size for a 64-bit integer is 20 */
	buffer = malloc(sizeof(char) * 21);
	if (!buffer)
		return (-1);
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	if (sign == -1)
		buffer[i++] = '-';

	while (--i >= 0)
		printed_chars += write(1, &buffer[i], 1);

	free(buffer);
	return (printed_chars);
}
