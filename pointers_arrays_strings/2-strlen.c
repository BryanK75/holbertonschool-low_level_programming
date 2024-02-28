#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s : characters
 *
 * Returns: integer.
 */
int _strlen(char *s)
{
	int compte = 0;

	while (*(s + compte) != '\0')
	{
		compte++;
	}
	return (compte);
}
