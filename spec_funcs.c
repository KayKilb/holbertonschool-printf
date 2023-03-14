#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include "main.h"

/**
 * print_char - prints a char
 *
 * @ap: va_list, arg from printf
 *
 * Return: int, number of chars printed (should be 1)
 */
int print_char(va_list ap)
{
	int i;
	char c = va_list(ap, int);
	char null[5] = "(nil)";

	if (c == '\0')
	{
		for (i = 0; i < 5; i++)
		{ putchar(null[i]); }
		return (5);
	}

	putchar(c);
	return (1);
}

/**
 * print_str - prints a string
 *
 * @ap: va_list, arg from printf
 *
 * Return: int, number of chars printed
 */
int print_str(va_list ap)
{
	int sl = 0;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{ return (0); }

	while (str[sl])
	{
		putchar(str[sl]);
		sl++;
	}

	return (sl);
}

/**
 * print_null - prints %
 *
 * @ap: va_list, arg from printf
 *
 * Return: int, number of chars printed (should be 0)
 */
int print_null(va_list ap)
{
	(void) ap;
	return (0);
}

/**
 * print_int - prints an int
 *
 * @ap: va_list, arg from printf
 *
 * Return: int, number of chars printed
 */
int print_int(va_list ap)
{
	int i, ii, a = 0, n, not_n, x, sl = 0;

	n = va_arg(ap, int);

	if (n < 0)
	{
		putchar('-');
		n = n * -1;
		a = 1;
	}

	not_n = n;

	while (not_n > 0)
	{
		sl++;
		not_n = (not_n / 10);
	}

	if (sl == 0)
	{ return (0); }

	for (i = sl - 1; i >= 0; i--)
	{
		x = 1;

		for (ii = 0; ii < i; ii++)
		{
			x = x * 10;
		}

		putchar((n / x) + '0');
		n = (n % x);
	}

	if (a == 1)
	{ sl = sl + 1; }

	return (sl);
}
