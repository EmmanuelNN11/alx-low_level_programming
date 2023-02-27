#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the string to be tested
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int x;

	while (s[counter] != '\0')
		counter++;
	for (x = 0; x < counter; x++)
	{
		counter--;
		reverse = s[x];
		s[x] = s[counter];
		s[counter] = reverse;
	}

}
