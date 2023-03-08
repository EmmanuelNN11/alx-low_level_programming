#include "main.h"

/**
 * _pow_recursion - gets the value of the power of a given number
 * @x: the number
 * @y: the raising value
 * Return: the number of a given number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
