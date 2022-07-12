#include "main.h"

/**
 * swap_int - swaps the values of int a and b
 *
 *@a: first int pointer
 *@b: second int pointer
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
