#include "main.h"

/**
 * print_last_digit - Printd the last digit
 * @n: input number is an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n > 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(-ld + '0');
		return (-ld);
	}
}
