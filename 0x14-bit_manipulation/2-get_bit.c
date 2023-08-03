#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index: index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_val;

	if (n == 0 && index > 64)
		return (0);

	for (bit_val = 0; bit_val <= 63; n >>= 1, bit_val++)
	{
		if (index == bit_val)
		{
			return (n & 1);
		}
	}
	return (bit_val);
}
