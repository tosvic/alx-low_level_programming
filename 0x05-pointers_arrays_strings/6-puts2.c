#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (num % 2 == 0)
			_putchar(str[num]);
		num++;
	}
}
