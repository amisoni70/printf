#include "main.h"
/**
  *print_character - print character
  *@args: parameter
  *Return: character
  */
int print_character(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
  *print_string - print string
  *@args: parameter
  *Return: string
  */
int print_string(va_list args)
{
	char *s;
	int l = 0;

	s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	while (s[l] != '\0')
	{
		l++;
	}

	return (write(1, s, l));
}

/**
  *print_percent - print percent sign
  *@args: parameter
  *Return: percent sign
  */
int print_percent(va_list args)
{
	(void) args;

	return (write(1, "%", 1));
}
