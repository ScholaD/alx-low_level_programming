#include "main.h"
/**
 * print_line - main point
 * @n: interger
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
