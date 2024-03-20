#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element.
 *
 * @array: array of int
 * @size: size of the array
 * @action: a funtion pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
