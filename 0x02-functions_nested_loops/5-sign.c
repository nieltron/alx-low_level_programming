#include "main.c"
/**
 * print_sign - sign of number
 * @n: variable
 * Return: 0 for if it's zero or one if > zero or -1 for < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
