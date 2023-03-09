#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - returns the number of characters printed
 * excluding the null byte used to end output to strings
 * ^write output to stdout, the standard output stream
 *
 * @format: char array, the string to be printed
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, ii = 0, x = 0, sl = 0;
	spec_t specs[] = {
		{ "c", print_char },
		{ "s", print_str }
	};

	va_start(ap, format);

	if (format == NULL)
	{ return (0); }

	while (format[i])
	{
		ii = 0;

		if (format[i] == '%' && x == 0)
		{
			x = 1;
		}
		else if (x == 1)
		{
			while (ii < 2)
			{
				if (format[i] == specs[ii].spec)
				{
					specs[ii].f(ap);
					sl = sl + specs[ii].f(ap);
					x = 2;
				}
				ii++;
			}
			
			if (x != 2)
			{ putchar(format[i]); }
			x = 0;
		}
		else
		{ putchar(format[i]); }

		i++;
		sl++;
	}

	va_end(ap);

	return(sl);
}


/**
 * print_char - prints a char
 *
 * @ap: a variadic argument
 *
 * Return: int
 */
int print_char(va_list ap)
{
	putchar(va_arg(ap, char));
	return (-1);
}

/**
 * print_str - prints a string
 *
 * @ap: a variadic argument
 *
 * Return: int
 */
int print_str(va_list ap)
{
	int sl = 0;
	char *str;

	str = va_arg(ap, char *);

	while (str[sl])
	{
		putchar(va_arg(ap[sl], char));
		sl++;
	}

	sl = sl - 2;
	return (sl);
}
