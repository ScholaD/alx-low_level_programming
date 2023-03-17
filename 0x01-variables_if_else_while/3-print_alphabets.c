#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

 /* Print lowercase alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
 /* Print uppercase alphabet */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');  /* Print newline character */
	return (0);
}

