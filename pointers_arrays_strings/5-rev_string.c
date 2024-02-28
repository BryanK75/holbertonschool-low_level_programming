#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string.
 *
 * @s : character
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int compte = 0;
	int i;
	int j;
	int temp;

	while (s[compte] != '\0')
	{
		compte++;
	}

	for (i = compte - 1, j = 0; i > j; i--, j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

	}
}
