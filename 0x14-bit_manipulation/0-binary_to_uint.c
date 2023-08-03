#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val;
	int i, base_two;

	if (!b)
		return (0);

	dec_val = 0;

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			dec_val += base_two;
		}
	}

	return (dec_val);
}
