#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
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
	putchar(va_arg(ap, int));
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

	while (str[sl])
	{
		putchar(str[sl]);
		sl++;
	}

	return (sl);
}

/**
 * print_int - prints an int
 *
 * @ap: va_list??, arge from printf
 *
 * Return: int, number of chars printed
 *
 * int print_int(int ap)
 * {
 * }
*/
