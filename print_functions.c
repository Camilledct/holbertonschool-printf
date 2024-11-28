#include "main.h"

/**
 * print_char - print a character
 * @args: List of arguments.
 * Return: numbers of caracters (always 1).
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - print a character string.
 * @args: arguments list.
 * Return: Number of character print.
 */
int print_string(va_list args)
{	char *str = va_arg(args, char *);
	if (str == NULL)
		return 0; /*  Don't print anything and return 0 printed characters */
	return write(1, str, strlen(str)); /* Print the string and return the printed characters */
}
/**
 * print_percent - print a percent.
 * @args: arguments list (non used here).
 * Return: number of character print (always 1).
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
/**
 * _putchar - Print a character
 * Return: a character
 * @c: the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
