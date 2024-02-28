#include "main.h"
/**
 * swap_int - swapsthe values of two integers.
 *
 * @a : integer
 *
 * @b : integer
 *
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

