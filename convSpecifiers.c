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
	int i, count = 0;
	char *str;
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
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char*);
					for (i = 0; str[i] != '\0'; i++)
					{
						_putchar(str[i]);
						count++;
					}
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
