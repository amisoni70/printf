#include "main.h"
/**
 * print_unsigned_integer - prints an unsigned integer
 * @args: A list of arguments containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_unsigned_integer(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *buffer;
	int i = 0, j = 0;
	int printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	/* Maximum size for a 64-bit integer is 20 */
	buffer = malloc(sizeof(char) * 21);
	if (!buffer)
		return (-1);

	while (n > 0 && i < 20)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		printed_chars += write(1, &buffer[j], 1);

	free(buffer);
	return (printed_chars);
}

/**
 * print_unsigned_octal - prints an unsigned octal
 * @args: A list of arguments containing the unsigned octal to print
 *
 * Return: The number of characters printed
 */
int print_unsigned_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *buffer;
	int i = 0, j = 0;
	int printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	/* Maximum size for a 64-bit integer is 22 */
	buffer = malloc(sizeof(char) * 23);
	if (!buffer)
		return (-1);

	while (n > 0 && i < 22)
	{
		buffer[i++] = n % 8 + '0';
		n /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	printed_chars += write(1, &buffer[j], 1);

	free(buffer);
	return (printed_chars);
}

/**
 * print_unsigned_hexadecimal - prints an unsigned hexadecimal
 * @args: A list of arguments containing the unsigned hexadecimal to print
 *
 * Return: The number of characters printed
 */
int print_unsigned_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *buffer;
	int i = 0, j = 0, digit;
	int printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	/* Maximum size for a 64-bit integer is 16 */
	buffer = malloc(sizeof(char) * 17);
	if (!buffer)
		return (-1);

	while (n > 0 && i < 16)
	{
		digit = n % 16;

		if (digit < 10)
			buffer[i++] = digit + '0';
		else
			buffer[i++] = digit - 10 + 'a';
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
		printed_chars += write(1, &buffer[j], 1);

	free(buffer);
	return (printed_chars);
}


/**
 * print_unsigned_hexadecimal_uppercase - prints an unsigned
 *				hexadecimal in uppercase
 * @args: A list of arguments containing the unsigned hexadecimal to print
 *
 * Return: The number of characters printed
 */
int print_unsigned_hexadecimal_uppercase(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *buffer;
	int i = 0, j = 0, digit;
	int printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	/* Maximum size for a 64-bit integer is 16 */
	buffer = malloc(sizeof(char) * 17);
	if (!buffer)
		return (-1);

	while (n > 0 && i < 16)
	{
		digit = n % 16;

		if (digit < 10)
			buffer[i++] = digit + '0';
		else
			buffer[i++] = digit - 10 + 'a';
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (isalpha(buffer[j]))
			buffer[j] = toupper(buffer[j]);
		printed_chars += write(1, &buffer[j], 1);
	}

	free(buffer);
	return (printed_chars);
}
