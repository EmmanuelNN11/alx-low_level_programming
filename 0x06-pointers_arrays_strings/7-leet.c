#include "main.h"

/**
 * leet - encodes string to 1337
 * @n: number of elements
 * Return: n
 */

char *leet(char *n)
{
	int a;
	int b;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == x[b])
			{
				n[a] = y[b];
			}
		}
	}
	return (n);
}
