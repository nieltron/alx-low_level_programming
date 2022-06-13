#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: input variable
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
