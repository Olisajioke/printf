#include "main.h"

/**
 * _formatf - determine what to print in each conversion
 * @args: arguments
 * @format: arguments
 * Return: length of characters printed
 */
int _formatf(va_list args, char format)
{
	int i, num, count = 0;
	char *str;

	switch (format)
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
		case '%':
			_putchar('%');
			count++;
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			count = _print_num(num, count);
			break;
		default:
			_putchar(format);
			break;
	}
	return (count);
}
