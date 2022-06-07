#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - all natural numbers up to 98
 * @x: variable
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98 ; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; x >= 98 ; x--)
		{
			printf("%d", x);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
