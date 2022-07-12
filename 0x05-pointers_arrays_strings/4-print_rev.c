#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, var in reverse
 *
 * @s: string var
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
