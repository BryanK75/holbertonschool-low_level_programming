#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Prints all the arguments
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *p;
	int i;
	int sum = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= strtol(argv[i], &p, 10);
		}
		printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}
