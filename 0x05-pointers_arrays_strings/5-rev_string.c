#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints string in reverse
 *
 * @s: string variable
 */
void rev_string(char *s)
{
	int i, var;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		var = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = var;
	}
}
