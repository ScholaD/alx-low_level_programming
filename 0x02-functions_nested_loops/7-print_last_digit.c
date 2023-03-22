#include "main.h"
/**
 * print_last_digit - Entry point
 *@num:character in ASCII
 * Return: Retur last_digit
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;
	a = num % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
