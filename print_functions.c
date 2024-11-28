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
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
		count += _putchar(*str++);
	return (count);
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
/**
*print_number - Imprime un entier signé.
*@args: Liste d'arguments.
*Return: Nombre de caractères imprimés.
*/
int print_number(va_list args)
{
    int num = va_arg(args, int);
    char buffer[12];
    int i = 0, count = 0;
    int is_negative = 0;

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    if (num < 0) 
    {
        is_negative = 1;
        if (num == INT_MIN) 
        {
            num += 1;
        }
        num = -num;
    }

    while (num > 0) 
    {
        buffer[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (is_negative)
    {
        _putchar('-');
        count++;
    }

    while (--i >= 0)
    {
        _putchar(buffer[i]);
        count++;
    }

    return (count);
}
