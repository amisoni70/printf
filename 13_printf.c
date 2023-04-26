#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_revstr - function that prints a string in reverse
 * @ap: arguements to be passed
 * Return: The length of the string
**/

int print_revstr(va_list ap)
{
	char *s = va_arg(ap, char*);
	int i;
	int k = 0;

	if (s == NULL)
		s = "(null)";

	while (s[k] != '\0')
	{	
		k++;
	}
	
	for (i = k - 1 ; i >= 0 ; i--)
	{
		write(1, &s[i], 1);

	}
	return (k);
}
