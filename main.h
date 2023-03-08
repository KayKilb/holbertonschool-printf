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
	int (*f)(int a, int b);
} spec_t;

int _printf(const char *format, ...);

#endif
