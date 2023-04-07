#include "main.h"
#include <stdlib.h>

/**
 * set_bit - changes a bit to 1 at a given index
 * @n: number to be tested
 * @index: index
 * Return: 1 if successful, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
