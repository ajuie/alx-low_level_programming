#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long n1, n2, sum;

	n1 = 0, n2 = 1;
	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		if (i != 50)
		{
			printf(", ");
		}
		else
			printf("\n");
		n1 = n2;
		n2 = sum;
	}
	return (0);
}
