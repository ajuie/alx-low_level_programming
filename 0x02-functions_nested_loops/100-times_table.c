#include "main.h"

/**
 * print_times_table - prints times table of an integer
 * @n: inputs  an integer
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (prod >= 10 && prod < 100)
				{
					_putchar(','), _putchar(' '), _putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100)
				{
					_putchar(','), _putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar(((prod % 10) % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(','), _putchar(' '), _putchar(' '), _putchar(' ');
					}
					_putchar(prod + '0');
				}
			}
			_putchar('\n');
		}
	}
}



