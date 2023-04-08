#include "main.h"
/**
 * _islower - Entry point
 *@c:character in ASCII
 * Return: Return 1 for lowercase 0 for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
