#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr -  locates a character in a string.
 *
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: pointer to the first occurrence of the charac
 * ter c in the string s, or NULL if the character is no
 * t found
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
