#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			count += _formatf(args, *format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
