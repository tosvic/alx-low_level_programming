#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print whether the number stored in the variable n is positive or negativen or 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*my code*/
	if (n > 0)
	{
		printf("%i is is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
