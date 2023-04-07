#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary code to unsigned int
 * @b: string to be tested
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int x;

	if (!b)
	{
		return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
	if (b[x] != '0' && b[x] != '1')
		return (0);
	}
	while (*b != '\0')
	{
		converted = (converted << 1) | (*b++ - '0');
	}
	return (converted);
}
