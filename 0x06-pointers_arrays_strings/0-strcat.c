#include "main.h"
/**
 * _strcat - cat two strings
 * @dest: first variable
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + a) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
