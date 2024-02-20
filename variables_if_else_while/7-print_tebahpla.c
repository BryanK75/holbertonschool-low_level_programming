#include <stdio.h>
/**
 * main - Prints the alphabet backwards.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	{
		for (n = 27; n > 1; n--)
		{
			putchar (abc[n]);
		}
		putchar ('\n');
		return (0);
	}
}
