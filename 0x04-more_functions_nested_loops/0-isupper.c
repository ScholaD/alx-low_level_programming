#include "main.h"
/**
 *_isupper - The main point
 *@c: integer that detects alphabets
 *Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
