#include <stdio.h>
/**
 *main - main point
 *Return: always 0
 */
int main(void)
{
	long long int n = 612852475143;
	long long int largest_factor = 1;
	long long int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n = n / i;
		}
	}
	printf("%lld\n", largest_factor);
	return (0);
}
