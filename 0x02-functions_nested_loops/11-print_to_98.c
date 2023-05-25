#include "main.h"

/**
 * print_to_98 - prints the number to 98
 *@n: inputs an integer
 *
 * Return" Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
