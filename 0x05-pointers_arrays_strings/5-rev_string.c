include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int num1 = 0, num2, num3;
	char *str, temp;

	while (num1 >= 0)
	{
		if (s[num1] == '\0')
			break;
		num1++;
	}
	str = s;

	for (num2 = 0; num2 < (num1 - 1); num2++)
	{
		for (num3 = num2 + 1; num3 > 0; num3--)
		{
			temp = *(str + num3);
			*(str + num3) = *(str + (num3 - 1));
			*(str + (num3 - 1)) = temp;
		}
	}
}
