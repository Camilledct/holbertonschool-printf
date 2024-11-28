#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct specifier
{
	char spec;                  /* the specifier character (ex: 'c', 's') */
	int (*f)(va_list args);     /* Pointer to function */
} specifier_t;

/* Functions for each specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
