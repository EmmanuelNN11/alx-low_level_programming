#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be tested
 * @c: character to be located
 * Return: 0 if successful
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
