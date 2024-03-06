#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @b: character
 * @s: character
 * @n: unsigned integer
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
