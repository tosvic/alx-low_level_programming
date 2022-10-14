#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char myStr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, myStr, sizeof(myStr) - 1);

	return (1);
}
