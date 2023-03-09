#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	return (0);
}

/**
 * print_char - prints a string
 *
 * @ap: a variadic argument
 *
 * Return: int
 */
int print_string(va_list ap)
{
	int sl = 0;
	char *str;

	str = va_arg(ap, char *);

	while (str[sl])
	{
		putchar(va_arg(ap[sl], char));
		sl++;
	}

	sl = sl - 1;
	return (sl);
}
