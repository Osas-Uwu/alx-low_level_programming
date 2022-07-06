#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @var: variable whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int var)
{
	int result;

	if (var < 0)
		result = -1 * (var % 10);
	else
		result = var % 10;

	_putchar ((result) + '0');

	return (result);
}
