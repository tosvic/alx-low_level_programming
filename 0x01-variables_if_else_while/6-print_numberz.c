#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(dig + '0');
		++dig;
	}
	putchar("\n");

	return (0);
}
