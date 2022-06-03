#include <stdio.h>
/**
 * main - Entry point
 *
 * for loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	char rt;

	for (s = 0 ; s <= 9 ; s++)
	{
		putchar(s + '0');
	}
	for (rt = 'a' ; rt <= 'f' ; rt++)
	{
		putchar(rt);
	}
	putchar('\n');
	return (0);
}
