#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the me
 * mory area pointed to by s with the constant byte b
 *
 * @s: pointer to memory
 * @b: constant byte to fill memory
 * @n: size of byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
