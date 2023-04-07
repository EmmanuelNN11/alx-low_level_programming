#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets a bit at a given index
 * @n: number to be tested
 * @index: index
 * Return: value of bit or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
