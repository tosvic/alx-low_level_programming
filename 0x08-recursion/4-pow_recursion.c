#include "main.h"
/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 * @x: number
 * @y: the power to raise @n to
 * Return: the value of @x to the @y power
 */
int _pow_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);

	return (i * (_pow_recursion(i, j - 1)));
}
