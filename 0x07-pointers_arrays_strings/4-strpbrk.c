#include "main.h"

/**
 * _strpbrk - serches for a set bytes in a string
 * @s: the string to be tested
 * @accept: string to be tested
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
