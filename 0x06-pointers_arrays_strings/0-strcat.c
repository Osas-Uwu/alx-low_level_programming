#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 *
 * @src: first string
 * @dest: second string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int j;

	m = 0;
	j = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[j] != '\0')
	{
		dest[m] = src[j];
		j++;
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
