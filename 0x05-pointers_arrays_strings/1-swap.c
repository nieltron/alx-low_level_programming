#include "main.h"
/**
 * swap_int - swap the value of 2 integers
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
