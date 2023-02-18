#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	putchar(a);
	putchar('\n');

	return (0);

}
