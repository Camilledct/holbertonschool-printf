#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct specifier - Structure associating a format specifier with a function
 * @spec: The specifier character (e.g., 'c', 's', '%').
 * @f: Pointer to a function that handles the specified format.
 */
typedef struct specifier
{
	char spec;
	int (*f)(va_list args);
} specifier_t;

/* Functions for each specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
