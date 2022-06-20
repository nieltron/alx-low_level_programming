#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints diagonaly
 * @a: input pointer
 * @size: size
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int c;
	int d = 0;
	int e = 0;

	for (c = 0; c < size; c++)
	{
		d += a[c];
		e += a[size - c - 1];
		a += size;	
	}
	printf("%d, " d);
	printf("%d\n", e);
}
