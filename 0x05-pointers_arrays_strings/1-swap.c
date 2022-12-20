#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: into a
 * @b: into b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
