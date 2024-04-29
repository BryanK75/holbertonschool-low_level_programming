#include "main.h"
#include <stdio.h>


/**
 * _strcmp - Compare two string
 * @s1: char
 * @s2: char
 * Return: (int)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	if (s1 != s2)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			r = s1[i] - s2[i];
			if (r != 0)
			{
				return (r);
			}
			i++;
		}
	}
	return (0);
}
