#include "main.h"
/**
 * print_sign - Entry point
 *@n:character in ASCII
 * Return: Return 1 for positive -1 for lesser than  0 for other
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
