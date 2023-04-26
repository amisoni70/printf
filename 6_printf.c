#include "main.h"
/**
 * print_pointer - print the memory address of a
 *		pointer in hexadecimal format.
 * @args: A list of arguments with address of pointer to print
 *
 * Return: The number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	char *buffer;
	int i = 0, j = 0, digit;
	int printed_chars = 0;
	unsigned long n;

	/* Maximum size for a 64-bit pointer is 16 */
	buffer = malloc(sizeof(char) * 17);
	if (!buffer)
		return (-1);

	/* Convert pointer to hexadecimal */
	n = (unsigned long) ptr;
	while (n > 0 && i < 16)
	{
		digit = n % 16;
		if (digit < 10)
			buffer[i++] = digit + '0';
		else
			buffer[i++] = digit - 10 + 'a';
		n /= 16;
	}

	/* Add "0x" prefix */
	buffer[i++] = 'x';
	buffer[i++] = '0';

	/* Print the pointer */
	for (j = i - 1; j >= 0; j--)
		printed_chars += write(1, &buffer[j], 1);

	free(buffer);
	return (printed_chars);
}
