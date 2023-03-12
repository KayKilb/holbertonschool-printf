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
	char c = '\0';
	char *str;

	str = NULL;

	_printf("%%%\n");
	printf("%%%\n");
	_printf("this should be %s29 chars long\n", str);
	_printf("checking what happens when a char == null (it can't be done)\n");
	_printf("checking what %chappens when a char == the null byte itself (it wants it to be added to sl despite not acting like a char nor cutting the printing short)\n", c);
	return (0);
}
