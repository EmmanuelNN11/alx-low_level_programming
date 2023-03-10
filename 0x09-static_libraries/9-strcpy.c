#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string from one pointer to another
 * @src: pointer
 * @dest: pointed to
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

