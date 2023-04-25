#include "main.h"

/**
 * print_unsigned_integer - function that prints unsigned int
 * @args: list of args containing integer to print
 * Return: No. of characters printed
**/

int print_unsigned_integer(va_list args)
{
	unsigned *buffer, temp, int n = va_arg(args, unsigned int);
	char c;
	int l, i = 0, n = 0, printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	temp = n;
	while (temp > 0)
	{
		temp = temp / 2
		n++;
	}


	/*Maximum size of an int on a 64 bit machine is 20*/

	buffer = (int *)malloc(sizeof(int) * n);

	if (!buffer)
		return (-1);

	while (n > 0)
	{
		buffer[i++] = n % 2 + '0';
		n /= 2;
	}

	for (l = n - 1 ; l >= 0 ; l--)
		c = buffer[l] + '0';
		printed_chars += write(1, &c], 1);

	free(buffer);
	return (printed_chars);
}
