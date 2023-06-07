#include "main.h"

/**
 * factorial - prints the factorial of a int
 * @n: inputs an integer
 *
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}

