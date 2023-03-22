#include "main.h"
/**
 * print_last_digit - Entry point
 *@num:character in ASCII
 * Return: Retur last_digit
 */
int print_last_digit(int num)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
