#include <stdio.h>

/**
 * main - Entry point
 *
 * for loop
 *
 * if condition
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'a' ; lower <= 'z' ; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
