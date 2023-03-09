#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct spec - struct spec
 *
 * @spec: the specifier
 * @f: the function associated
 */
typedef struct spec
{
	char *spec;
	int (*f)(va_list);
} spec_t;

int print_char(va_list ap);
int print_str(va_list ap);

int _printf(const char *format, ...);

#endif
