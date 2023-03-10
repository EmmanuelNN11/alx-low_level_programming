#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int a = n;

	for (; x < a; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
