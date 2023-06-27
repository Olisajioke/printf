#include "main.h"

/**
 * _print_unsigned - Prints an unsigned integer
 * @n: The number to be printed
 * @base: The base for conversion (8 for octal, 10 for decimal, 16 for hexadecimal)
 * @hex_case: A flag indicating whether to use
 * lowercase (0) or uppercase (1) for hex
 *
 * Return: The number of characters printed
 */

int _print_unsigned(unsigned int n, int base, int hex_case)
{
	char buffer[1024];
	int count = 0, i = 0;
	unsigned int remainder;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		remainder = n % base;

		if (remainder < 10)
			buffer[i++] = remainder + '0';
		else
			buffer[i++] = (hex_case ? 'A' : 'a') + (remainder - 10);

		n /= base;
	}

	count = i;

	while (i > 0)
	{
		_putchar(buffer[--i]);
	}

	return (count);
}
