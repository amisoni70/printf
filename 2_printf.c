#include "main.h"

/**
 * print_unsigned_integer - function that prints unsigned int
 * @args: list of args containing integer to print
 * Return: No. of characters printed
**/

int print_unsigned_integer(va_list args)
{
	int n = va_arg(args, int);
	int sign = 1;
	char *buffer;
	int i = 0, j;
	int printed_chars = 0;

	if (n == 0)
	{
		printed_chars += write(1, "0", 1);
		return (printed_chars);
	}

	if (n < 0)
	{
		n = n * -1;
	}

	/*Maximum size of an int on a 64 bit machine is 20*/

	buffer = malloc(sizeof(char) * 21);

	if (!buffer)
		return (-1);

	while (n > 0 && i < 21)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	for (j = i - 1 ; j >= 0 ; j--)
		printed_chars += write(1, &buffer[j], 1);

	free(buffer);
	return (printed_chars);
}

/**
 * convert_to_binary - function takes unsigned int as input and converts to binary
 * @num: unsigned integer
 * Return: the binary string
**/

char* convert_to_binary(unsigned int num)
{
	char *binary_str;
	unsigned int num;
	i = 0;

	binary_str = (char*) malloc(sizeof(char) * (sizeof(unsigned int) * 8 + 1));

	if (binary_str == NULL)
		return (NULL);

	while (num > 0) 
	{
		binary_str[i++] = (num % 2 == 1) ? '1' : '0';
		num /= 2;
	}
	binary_str[i] = '\0';

	return (binary_str);
}
