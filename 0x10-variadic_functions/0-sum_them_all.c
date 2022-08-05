#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of parameter
 *
 * @n: variable of unsigned int
 * @...: variable paremeter
 *
 * Return: sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		va_end(ptr);
	}
	return (sum);
}
