#include "main.h"

/**
 * _atoi - converts a string to interger
 * @s: string to be tested
 * Return: interger
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int length = 0;
	int d = 0;
	int number = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
			if (b % 2)
				number = -number;
			c = c * 10 + number;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
