#include <stdio.h>
/**
 * main Entry
 * print alphabets in lower case
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putcahr(ch);
		++ch;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}

	putchar('\n');

	return (0);
}
