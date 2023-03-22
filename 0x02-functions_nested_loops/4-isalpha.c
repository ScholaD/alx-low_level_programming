#include "main.c"
/**
 * _isalpha - Entry point
 *@c:character in ASCII
 * Return: Return 1 for lowercase 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
