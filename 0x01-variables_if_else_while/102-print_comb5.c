#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int d1 = i / 10;
			int d2 = i % 10;
			int d3 = j / 10;
			int d4 = j % 10;

			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			putchar(d3 + '0');
			putchar(d4 + '0');
			if (i < 99 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
