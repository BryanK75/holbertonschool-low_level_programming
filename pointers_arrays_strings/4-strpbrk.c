#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of set of bytes
 *
 * @s: character
 * @accept: character
 *
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}
	return ('\0');
}
