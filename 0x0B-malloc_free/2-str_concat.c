#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - this function concatenantes two strings
 * @s1: string one
 * @s2: string two
 * Return: concat of the two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *cct;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	cct = malloc(sizeof(char) * (a + b + 1));
	if (cct == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		cct[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		cct[a] = s2[b];
		a++, b++;
	}
	cct[a] = '\0';
	return (cct);
}
