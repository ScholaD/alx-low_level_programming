#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements in the array
 * @size: size of each element in byte
 *
 * Return: pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
