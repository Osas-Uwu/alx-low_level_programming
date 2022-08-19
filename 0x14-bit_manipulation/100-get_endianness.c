#include "main.h"

/**
 * get_endianness - check the endian status
 *
 * get_endianness - check the endian status
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)(&x);

	return (*c);
}
