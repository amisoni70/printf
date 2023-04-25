#include "main.h"

/**
  *print_binary - print binary representation of an unsigned integer
  *@args: parameter
  *Return: number of characters printed
  */
int print_binary(va_list args)
{
	unsigned int n, temp;
	int l, i = 0, s = 0, *binary, char_written = 0;
	char c;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		char_written = write(1, "0", 1);
		return (char_written);
	}

	temp = n;
	while (temp > 0)
	{
		temp /= 2;
		s++;
	}

	binary = (int *)malloc(sizeof(int) * s);
	if (!binary)
		return (-1);

	while (n > 0)
	{
		binary[i++] = n % 2 + '0';
		n = n / 2;
	}

	for (l = s - 1; l >= 0; l--)
	{
		c = binary[l] + '0';
		char_written += write(1, &c, 1);
	}

	free(binary);
	return (char_written);
}
