#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - Entry point
 * @c: counts arguments
 * @s: array of arguments
 *
 * Return: 1 if error,or 0 (Success)
 */
int _isdigit(int c, char *s)
{
	int i, res;

	for (i = 0; i < c; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = 1;
		else
			res = 0;
	}
	if (res == 1)
		return (1);
	else
		return (0);
}

/**
 * main - adds positive numbers
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0 (Success)
 */
int main (int argc, char *argv[])
{
	int i, sum, j, n = 0;

	if (argc <= 1)
		printf("O\n");
	for (j = 1; j < argc; j++)
	{
		n = strlen(argv[j]);
		if (_isdigit(n, argv[j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

