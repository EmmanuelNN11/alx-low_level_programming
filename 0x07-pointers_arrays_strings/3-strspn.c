#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: substring
 * Return: number of element
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int x = 0;

	while (*s)
	{
		for (; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

