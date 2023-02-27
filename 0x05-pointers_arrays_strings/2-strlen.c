#include "main.h"

/**
 * _strlen - this code outputs the length of a string
 * @s: string to be tested
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
