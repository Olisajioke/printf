#include "main.h"

/**
 * print_binary - prints binary numbers
 * @num: unsigned integer to be converted
 * @count: number to be returned
 * Return: returns count if successful
 * and -1 if not
 */

int print_binary(unsigned int num, int count)
{
	count++;
	if (num / 2 != 0)
	{
	count = print_binary((num / 2), count);
	}
	_putchar('0' + num % 2);
	return (count);
}
