#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointer
 * @c: charachter
 *
 * Return: charcter or null (Success)
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
