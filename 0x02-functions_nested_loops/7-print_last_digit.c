#include "main.h"
/**
 * print_last_digit - print the last digit
 * @z: variable
 * Return: variable
 */
int print_last_digit(int z)
{
	if (z < 0)
	{
		z = z % 10 * -1;
	}
	else
	{
		z = z % 10;
	}
	_putchar(z + '0');
	return (z);
}
