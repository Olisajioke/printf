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
			if (!num)
			{
			_putchar('0');
			count++;
			}
			count = _print_num(num, count);
			break;
		case 'b':
			unsigned int num = va_arg(args, unsigned int);

			count = print_binary(num, count);
			break;
		case 'u':
			{
			unsigned int num = va_arg(args, unsigned int);
			count += _print_unsigned(num, 10, 0);
			break;
			}
		case 'o':
			{
			unsigned int num = va_arg(args, unsigned int);
			count += _print_unsigned(num, 8, 0);
			break;
			}
		case 'x':
			{
			unsigned int num = va_arg(args, unsigned int);
			count += _print_unsigned(num, 16, 0);
			break;
			}
		case 'X':
			{
			unsigned int num = va_arg(args, unsigned int);
			count += _print_unsigned(num, 16, 1);
			break;
			}
		default:
			_putchar(format);
			break;
	}
	return (count);
}
