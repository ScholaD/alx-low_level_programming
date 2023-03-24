#imclude "main.h"
/**
 *more_numbers - main point
 * _putchar: prints result
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
		i++;
	}
}
