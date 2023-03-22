#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		int i = 0;

		while (i < 26)
		{
			_putchar(letter);
			letter++;
			i++;
		}
		_putchar('\n');
		count++;
		letter = 'a';
	}
}
