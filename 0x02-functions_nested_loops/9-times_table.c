#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: Empty output
 */

void times_table(void)
{

	int b;
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 0; b < 10; b++)
		{
		int sum = b * a;

		_putchar(',');
		if ((sum / 100) == 0)
		{
			_putchar(32);
		}
		else
		{
			_putchar('0' + (sum / 10));
		}
		if (sum % 10 == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('0' + (sum % 10));
		}
		}
	}
	_putchar('\n');
}
