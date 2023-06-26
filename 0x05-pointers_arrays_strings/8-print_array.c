#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array
 * @n: number of elements
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)

	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	printf("\n");
}
