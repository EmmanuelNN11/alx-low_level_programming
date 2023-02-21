#include <unistd.h>

/**
 * this program prints out the charaacter c to the standard output
 * @c: the character to print
 * Return: on success 1
 * On error -1 is returned and set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
