#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: pointer to a string to be printed inbetween numbers
 * @n: first number from the list of number to be printed
 * @...: variable parameters
 *
 * Return: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ptr, int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
			va_end(ptr);
		}
		else
		{
			printf("%d", va_arg(ptr, int));
			va_end(ptr);
		}
	}
	putchar('\n');
}
