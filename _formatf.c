#include "main.h"

/**
* _formatf - function to select each format case
* @args: list of arguments presented
* @format: format of output
* Return: count of output
*/

int _formatf(va_list args, char format)
{
	int count = 0;

	switch (format)
	{
		case 'c':
			count += convchar(va_arg(args, int));
			break;
		case 's':
			count += convstr(va_arg(args, char *));
			break;
		case '%':
			count += convmod(va_arg(args, int));
			break;
		case 'd':
		case 'i':
			count += convnum(va_arg(args, int));
			break;
		case 'b':
			count += convbin(va_arg(args, unsigned int));
			break;
		case 'u':
			count += convu(va_arg(args, unsigned int));
			break;
		case 'o':
			count += convoctal(va_arg(args, unsigned int));
			break;
		case 'x':
			count += convlhex(va_arg(args, unsigned int));
			break;
		case 'X':
			count += convuhex(va_arg(args, unsigned int));
			break;
		default:
			_putchar(format);
			break;
	}
	return (count);
}
