#include <stdio.h>

/**
 * main - this code outputs lowercase and upper case alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char upper;

	for (upper = 'a'; upper <= 'z'; upper++)
	putchar(upper);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');

	return (0);

}
