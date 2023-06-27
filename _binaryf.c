#include "main.h"

/**
* convbin - function to print out binary
* @bin: presented num
* Return: count of output
*/
int convbin(unsigned int bin)
{
	int count = 0;

	return (print_binary(bin, count));
}

/**
* print_binary - function to print out binary
* @num: presented num
* @count: count of output
* Return: count of output
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
