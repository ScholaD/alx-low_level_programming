#include "main.h"
/**
 * _strpbrk - locates the first occurrence
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
