#include "main.h"
/**
 * helper - Finds the square root of two numbers
 * @a: The number
 * @b: The number to test for the square root of @a
 * Return: square root
 */
int helper(int x, int y)
{
	if (y * y > a)
		return (-1);

	else if (y * y == a)
		return (y);

	else
		return (helper(x, y + 1));

	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
