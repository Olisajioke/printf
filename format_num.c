#include "main.h"
/**
 * _print_num - Prints an integer
 * @n: The number to be printed
 * @count: len of string
 * Return: The number of characters printed.
 */
int _print_num(int n, int count)
{
	if (n == 0)
	{
		return (count);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			count++;
		}
		count++;
		count = _print_num(n / 10, count);
		_putchar((n % 10) + '0');
		return (count);
	}
}
