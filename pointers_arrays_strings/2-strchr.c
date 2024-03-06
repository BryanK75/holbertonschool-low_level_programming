#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 *
 * @s: character
 * @c: character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
