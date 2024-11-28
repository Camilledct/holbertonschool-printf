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
    char spec;                  /* Le caractère du spécificateur (ex: 'c', 's') */
    int (*f)(va_list args);     /* Pointeur vers la fonction correspondante */
} specifier_t;

/* Fonctions pour chaque spécificateur */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif 
