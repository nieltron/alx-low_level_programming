#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal or less than 1 or greater than 1
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i;

	for (i = 0 ; s1[i] ; i++)
	{
		if (s2[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
	}
	return (diff);
}
