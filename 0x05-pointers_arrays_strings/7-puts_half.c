#include "main.h"

/**
 * puts_half - prints out the last half of a string
 * @str: string to be tested
 * Return: last half
 */

void puts_half(char *str)
{
	int a;
	int b;
	int length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	b = (length / 2);

	if ((length % 2) == 1)
		b = ((length + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
