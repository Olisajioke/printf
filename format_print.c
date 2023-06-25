#include "main.h"
#include <stdarg.h>
#include <unistd.h>


/**
 * _print_number - Prints an integer
 * @n: The number to be printed
 *
 * Return: The number of characters printed.
 */
int _print_number(int n)
{
unsigned int num;
int count = 0;

if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
{
num = n;
}

if (num / 10)
	count += _print_number(num / 10);

count += _putchar((num % 10) + '0');

return (count);
}
