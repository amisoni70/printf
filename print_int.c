#include "main.h"

/**
 * print_integer - prints an integer
 * @args: arguments to print
 * Return: number of characters printed
**/

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1, j = 1;
	char *k;
	char *m;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		write(1, "-", 1);
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			k[i] = (digit + '0');
			write(1, k, 1);
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	m[j] = (last + '0');
	write(1, last, 1);

	return (i);
}
