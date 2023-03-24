#include "main.h"
/**
 *print_number -Main point
 *@n: integrr
 */
void print_number(int n)
{
	int digit;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
