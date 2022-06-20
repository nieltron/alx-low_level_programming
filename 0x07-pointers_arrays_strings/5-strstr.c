#include "main.h"
/**
 * _strstr - locating a substring
 * @haystack: entire string
 * @needle: substring
 * Return: return variable
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (src);
		}
		haystack = src + 1;
	}
	return (0);
}
