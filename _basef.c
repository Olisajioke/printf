#include "main.h"

/**
* convu - function to print out unsigned num
* @num: presented num
* Return: count of output
*/
unsigned int convu(unsigned int num)
{
	return (_print_u(num, 10, 0));
}

/**
* convoctal - function to print out octal
* @num: presented num
* Return: count of output
*/
unsigned int convoctal(unsigned int num)
{
	return (_print_u(num, 8, 0));
}

/**
* convlhex - function to print out lower hex
* @num: presented num
* Return: count of output
*/
unsigned int convlhex(unsigned int num)
{
	return (_print_u(num, 16, 0));
}

/**
* convuhex - function to print out upper hex
* @num: presented num
* Return: count of output
*/
unsigned int convuhex(unsigned int num)
{
	return (_print_u(num, 16, 1));
}

/**
* _print_u - function to convert to base
* @n: presented num
* @base: base number
* @hex_case: handle hex case
* Return: count of output
*/
int _print_u(unsigned int n, int base, int hex_case)
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

