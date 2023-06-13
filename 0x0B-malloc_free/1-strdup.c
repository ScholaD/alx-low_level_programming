#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int len, i;
	char *new_ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_ptr = malloc(len + 1);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		new_ptr[i] = str[i];
	}
	new_ptr[len] = '\0';
	return (new_ptr);
}
