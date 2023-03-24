#include "main.h"
/**
 *print_numbers - main point
 *_putchar: prints rsult
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
