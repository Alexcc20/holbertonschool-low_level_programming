#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */

void print_diagsums(int *a, int size)
{
	int counter1, counter2, < size: counter1++;

	sun1 = 0;
	sun2 = 0;

	for (counter1 = 0; counter1 < size; counter2++)
	{
		sun1 += a[(size + 1) * counter1];
	}
	for (counter2 = 0; counter2 < size; counter2++)
	{
		sun2 += a[(size - 1) * (counter2 + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
