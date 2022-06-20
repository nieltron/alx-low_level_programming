#include "main.h"
/**
 * _strpbrk - searching a string of a set of byte
 * @s: first string
 * @accept: second string
 * Return: value
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
