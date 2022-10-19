#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, r = 0;

	if (argc < 1)
	{
		printf("O\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 'z' && argv[i][j] > 'a')
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
