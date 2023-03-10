#include "main.h"

/**
 * _puts - this code prints out a string to standard output
 * @str: string to be output
 * Return: none negative number of successful
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
