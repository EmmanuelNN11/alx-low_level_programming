#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns number of bits to be flipped to shift to another number
 * @n: first number
 * @m: other number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparator = n ^ m;
	unsigned int counter = 0;

	while (comparator)
	{
		counter = counter + (comparator & 1);
		comparator >>= 1;
	}
	return (counter);
}
