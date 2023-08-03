#include "main.h"
/**
 *binary_to_uint - converts a binary number to unsigned int
 *@b: string containing the binary number
 *
 *Return: the converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	int in;
	unsigned int de_val = 0;

	if (!b)
		return (0);
	for (in = 0; b[in]; in++)
	{
		if (b[in] < '0' || b[in] > '1')
			return (0);
		de_val = 2 * de_val + (b[in] - '0');
	}
	return (de_val);
}
