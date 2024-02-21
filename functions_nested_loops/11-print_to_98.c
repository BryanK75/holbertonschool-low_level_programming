#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98.
 *
 * @n : number
 *
 * Return: integer
 */
void print_to_98(int n)
{
	int i = 98;
	int k;

	if (n != 98)
	{
		if (n > 98)
		{
			for (k = n; k > i; k--)
				printf("%d, ", k);
		}
		else
		{
			for (k = n; k < i; k++)
				printf("%d, ", k);
		}
	}
	printf("%d\n", i);
}

