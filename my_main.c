#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;

	str = NULL;

	_printf("%%%\n");
	printf("%%%\n");
	_printf("this should be %s29 chars long\n", str);
	return (0);
}
