#include "main.h"
/**
 * print_alphabet_x10 - a to z ten times
 */
void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0 ; b < 10 ; i++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
