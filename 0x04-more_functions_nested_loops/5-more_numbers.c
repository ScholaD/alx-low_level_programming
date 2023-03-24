#include "main.h"
/**
 *more_numbers - main point
 * _putchar: prints result
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 14)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
