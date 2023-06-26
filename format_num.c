#include "main.h"
/**
 * _print_num - Prints an integer
 * @n: The number to be printed
 *
 * Return: The number of characters printed.
 */
int _print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		_print_num(n / 10);
	_putchar(n % 10 + '0');
	return (0);
}
