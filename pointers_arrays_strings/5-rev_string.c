#include "main.h"

/**
 * rev_string - Function that reverse a string
 *@s: The string to be modified
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	int t = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;

	while (i < l)
	{
		t = s[l];

		s[l] = s[i];

		s[i] = t;

		i++;

		l--;
	}
}

