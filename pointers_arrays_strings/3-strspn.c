#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: pointer
 * @accept: pointer
 *
 * Return: character(s) or null (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p, *str = s;
	char c;

	while ((c = *s++) != '\0')
	{
		for (p = accept; *p != '\0'; ++p)
			if (*p == c)
			break;
		if (*p == '\0')
			return (s - str - 1);
	}
	return (s - str - 1);
}
