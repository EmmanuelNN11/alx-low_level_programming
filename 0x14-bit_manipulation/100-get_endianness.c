#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - checks for the endianness
 * Return: 0 if big endian, 1 of little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}
