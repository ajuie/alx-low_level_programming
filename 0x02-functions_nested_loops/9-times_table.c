#include "main.h"

/**
 * times-table - prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar((n * i) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
