#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints out the content of an output
 *
 * @str: sting variable
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
