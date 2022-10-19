#include"main.h"

/**
 * print_time_table - print time table of numbers
 *
 * @n: take input
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (num <= 15 && >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for ((mult = 1; mult <= n; ++mult)
					{
					_putchar(',');
					_putchar(' ');

					prod = num * mult;

					if (prod <= 9)
					_putchar(' ');
					{
					if (prod <= 99)
					_putchar(' ');

					if (prob >= 100)
					{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
					}
					else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
					}
					_putchar('\n');
					}
		}
	}
}
