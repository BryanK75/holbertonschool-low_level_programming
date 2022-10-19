#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments
 * @argc: Integer
 * @argv: Pointer
 *
 * Return: O (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
