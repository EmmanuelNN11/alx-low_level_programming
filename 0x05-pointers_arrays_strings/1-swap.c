#include "main.h"

/**
 * swap_int - this codes exchanges the value of two integers
 * @a: interger to be exchanged
 * @b: interger to be exchanged
 * Return: swapped output
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
