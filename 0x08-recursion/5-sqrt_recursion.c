#include "main.h"

int actual_sqrt_recursion(int n, int i);


/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: the number to be tested
 * Return: value of the squareroot
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - gets the squareroot through recursion
 * @n: number to be tested
 * @i: interator
 * Return: result of the squareroot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}