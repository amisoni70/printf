#include "main.h"

/**
 * print_character - function returns a character
 * @ap: arguements passed
 * Return: 1
**/

int print_character(va_list ap)
{
	char c = va_arg(ap, int);

	if (c < 0 || c > 127)
		return (-1);

	return (write(1, &c, 1));

}

/**
 * print_percentage - function that prints a % symbol
 * @ap: list of arguements to be passed
 * Return: 1 (will return the character %)
**/

int print_percentage(va_list ap)
{
	(void) ap;
	return (write(1, "%", 1));
}

/**
 * print_string - function that prints the string
 * @ap: arguements to be passed
 * Return: the string
**/

int print_string(va_list ap)
{
	int k = 0;
	char *str = va_arg(ap, char *);

	if (!str)
		str = "(null)";

	while (str[k])
		k++;

	return (write(1, str, k));
}
