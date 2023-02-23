#include "main.h"
#include <stdio.h>

/**
 * print_number - prints out integer values
 * @n: The number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	if (a != 0)
		print_number(a);
	_putchar((unsigned int) n % 10 + '0');
}
