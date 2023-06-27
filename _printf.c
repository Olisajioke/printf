#include "main.h"

/**
 * _printf - a funct that produces output according to a format
 * @format: list of types of arguments passed to the function
 * Return: count of output characters.
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
