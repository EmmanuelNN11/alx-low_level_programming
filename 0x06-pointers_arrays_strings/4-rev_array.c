#include "main.h"

/**
 * reverse_array - reverses the contents of an artray
 * @a: string to be tested
 * @n: number of elements in the string
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (x = 0; x < n--; x++)
	{
		b = a[x];
		a[x] = a[n];
		a[n] = b;
	}
}
