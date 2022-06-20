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
	int i;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
