#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * check_spec - checks which format specifier and runs the correct function
 *
 * @ap: va_list, contains argument from _printf
 * @c: char, specifier
 *
 * Return: int, number of chars printed
 */
int check_spec(va_list ap, char c)
{
	int i = 0;
	spec_t specs[] = {
		{ "c", print_char },
		{ "s", print_str },
		{ "%", print_perc },
		{ "\0", print_null },
		{ "d", print_int },
		{ "i", print_int }
	};

	while (i < 6)
	{
		if (*specs[i].spec == c)
		{ return (specs[i].f(ap)); }

		i++;
	}

	putchar('%');
	putchar(c);
	return (2);
}


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
	int i = 0, sl = 0;

	va_start(ap, format);

	if (format == NULL)
	{ return (0); }

	while (format[i])
	{
		if (format[i] == '%')
		{
			sl = sl + check_spec(ap, format[i + 1]);
			i++;
		}
		else
		{
			putchar(format[i]);
			sl++;
		}

		i++;
	}

	va_end(ap);

	return (sl);
}
