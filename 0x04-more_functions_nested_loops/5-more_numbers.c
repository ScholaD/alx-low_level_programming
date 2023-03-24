#include "main.h"
/**
 *more_numbers - main point
 * _putchar: prints result
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			num = j;

			if (j >= 10)
			{
				_putchar('1');
				num = j % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
