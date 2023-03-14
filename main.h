#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

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
int print_null(va_list ap);
int print_int(va_list ap);

int check_spec(va_list ap, char c);
int _printf(const char *format, ...);

#endif
