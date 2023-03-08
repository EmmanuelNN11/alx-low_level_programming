#include "main.h"

/**
 * factorial - provides the factorial result of a given number
 * @n: interger to be tested
 * Return: returns factoral of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
