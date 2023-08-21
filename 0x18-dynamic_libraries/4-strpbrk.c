#include "main.h"
/**
 * _strpbrk - locates the first occurrence
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
