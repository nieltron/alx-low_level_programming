#include "main.h"
/**
 * puts2 - print one char out of 2 of a stings
 * @str: input string
 *
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putcahr(str[i]);
		}
	}
	_putchar('\n');
}
