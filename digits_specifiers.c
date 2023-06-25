#include "main.h"
#include <stdarg.h>

/**
 *_printf: Function implementation to print the number
 *@format:- prints the specifiers.
 *Return: the number of characters printed
 *(-1) if execution was unsuccessful
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;
	int d_arg;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == 'd' || format[i] == 'i')
	{
		d_arg = va_arg(args, int);
		count += _print_number(d_arg);
	}
	}
/* Add more cases for other format specifiers if needed */

	va_end(args);
}
