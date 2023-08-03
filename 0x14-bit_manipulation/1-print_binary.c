#include "main.h"
/**
 *print_binary - prints the binary equivalent of a decimal number
 *@n: number to print in binary
 **/
void print_binary(unsigned long int n)
{
	int in, total = 0;
	unsigned long int current;

	for (in = 63; in >= 0; in--)
	{
		current = n >> in;
		if (current & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
			_putchar('0');
	}
	if (!total)
		_putchar('0');
}
