#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
