#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterate;

	if (array == NULL || action == NULL)
		return;
	for (iterate = 0; i < size; iterate++)
	{
		action(array[iterate]);
	}
}
