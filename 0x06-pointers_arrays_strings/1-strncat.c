#include "main.h"

/**
 * *_strncat - concatenates two strings upto a certain number of bytes
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
