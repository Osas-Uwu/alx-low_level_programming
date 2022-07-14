#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 *
 * @src: source
 * @dest: destination
 * @n: int
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
	j++;
	}

	for (m = 0; src[m] != '\0'; m++)
	{
	if (m < n)
	{
	dest[m + j] = src[m];
	}
	else

	dest[m + j] = '\0';
	}
	return (dest);
}
