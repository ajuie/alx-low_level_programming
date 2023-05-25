#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printd th sum of all the multiples of 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum = sum + n;
		}
		else
		{
			continue;
		}
	}
	printf("%d", sum);
	return (0);
}
