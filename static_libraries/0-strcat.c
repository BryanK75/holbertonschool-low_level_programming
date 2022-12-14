#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Entry point
 * @dest: pointer string
 * @src: point string
 *
 * Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = src[i] = '\0';
	return (dest);
}
