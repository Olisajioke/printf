#include "main.h"

/**
* convnum - function to print out number
* @num: presented num
* Return: count of output
*/
int convnum(int num)
{
	int count = 0;

	if (!num)
	{
		_putchar('0');
		count++;
	}
	else
		count += _print_num(num, count);
	return (count);
}

/**
* _print_num - function to print out number recursively
* @n: presented num
* @count: count of output
* Return: count of output
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
