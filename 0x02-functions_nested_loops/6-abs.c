#include "main.h"
/**
 * _abs - absolute value
 * @r: variable
 * Return: value
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = -1 * r;
	}
	else if (r > 0)
	{
		r = r;
	}
	else
	{
		r = 0;
	}
	return (r);
}
