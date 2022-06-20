#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: return s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
