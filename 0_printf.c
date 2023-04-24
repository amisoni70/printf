#include "main.h"
/**
  *print_character - print character
  *@args: parameter
  */
void print_character(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
}

/**
  *print_string - print string
  *@args: parameter
  */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}

/**
  *print_percent - print percent sign
  *@args: parameter
  */
void print_percent(va_list args)
{
	(void)args;

	write(1, "%", 1);
}
