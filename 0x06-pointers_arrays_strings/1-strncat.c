#include "main.h"

/**
 * _strncat - concatenate two strings
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
	int j;
	int m;

	j = 0;
	m = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
	if (j < n)
	{
	dest[j + m] = src[j];
	}
	else

	dest[j + m] = '\0';
	}
	return (dest);
}
