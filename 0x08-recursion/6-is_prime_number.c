#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - prints the prime number
 * @n: input value
 * Return: 1 if prime number 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - prints prime number recursively
 * @n: input number
 * @i: iterator
 * Return: 1 if prime number 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
