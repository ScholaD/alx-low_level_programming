#include "main.h"
/**
 * print_last_digit - Entry point
 *@num:character in ASCII
 * Return: Retur last_digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar (last_digit + '0');
	return (last_digit);
}
