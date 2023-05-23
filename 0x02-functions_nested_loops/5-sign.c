#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the input number as an integer
 *
 * Return: 1 for possitive numvers. 0 for zero. -1 for the rest
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
