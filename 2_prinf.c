#include "main.h"

/**
  *print_binary - print binary representation of an unsigned integer
  *@args: parameter
  *Return: number of characters printed
  */
int print_binary(va_list args)
{
	unsigned int n, temp;
	int l, i = 0, s = 0, char_written = 0;
	char *binary;

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

	binary = malloc(sizeof(char) * (s + 1));
	if (!binary)
		return (-1);

	while (i < s)
	{
		binary[i++] = (n & 1) + '0';
		n >>= 1;
	}
	binary[s] = '\0';

	for (l = s - 1; l >= 0; l--)
	{
		char_written += write(1, &binary[l], 1);
	}

	free(binary);
	return (char_written);
}
