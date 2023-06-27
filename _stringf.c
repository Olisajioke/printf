#include "main.h"

/**
* convchar - function to print out char
* @ch: presented character
* Return: count of output
*/

int convchar(int ch)
{
	int count = 0;

	_putchar(ch);
	count++;
	return (count);
}

/**
* convstr - function to print out a string
* @str: presented string
* Return: count of output
*/
int convstr(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

/**
* convmod - function to print out modulus
* @count: presented character
* Return: count of output
*/
int convmod(int count)
{
	count = 0;

	_putchar('%');
	return (count++);
}


