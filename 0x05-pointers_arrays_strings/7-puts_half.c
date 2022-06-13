#include "main.h"
/**
 * puts_half - print half of a string
 * @str: variable
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	for (i = 0; str[i]; i++);
	
	if ((i % 2) == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (*(str + i))
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
