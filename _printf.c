#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Format string containing characters and specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list args;
	specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; specifiers[i].spec; i++)
			{
				if (*format == specifiers[i].spec)
				{
					count += specifiers[i].f(args);
					break;
				}
			}
			if (!specifiers[i].spec)
				return (-1);
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);

	return (count);
}
