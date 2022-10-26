#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int num = 0;

	for (; num < n; num++)
	{
		printf("%d", *(a + num));
		if (num != (n - num))
			printf(", ");
	}
	printf("\n");
}
