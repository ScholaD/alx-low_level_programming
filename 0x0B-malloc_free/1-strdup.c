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
	if (str == NULL)
	{
		return (NULL);
	}
	int len, i;
	char *new_str;

	len = strlen(str);
	new_str = malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}
