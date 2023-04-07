#include "main.h"
#include <stdlib.h>


/**
 * clear_bit - changes the value of a bit to 0 at index
 * @n: number to be tested
 * @index: index
 * Return: 1 if successful, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

