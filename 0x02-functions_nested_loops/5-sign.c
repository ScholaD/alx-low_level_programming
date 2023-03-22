#include "main.h"
#include <stdio.h>
/**
 * print_sign - Entry point
 *@n:character in ASCII
 * Return: Return 1 for positive -1 for lesser than  0 for other
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else
	{
		printf("0");
		return (0);
	}
}
