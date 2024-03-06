#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 *
 * @dest: character
 * @src: character
 * @n: unsigned integer
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_d = dest;
	char *ptr_src = src;

	while (n-- > 0)
	{
		*ptr_d++ = *ptr_src++;
	}
	return (dest);
}
