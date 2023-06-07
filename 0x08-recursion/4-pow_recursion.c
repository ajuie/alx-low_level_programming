#include "main.h"

/**
 * _pow_recursion - prints the value of x raised to the power of y
 *
 * @x: input number
 * @y: power of the number
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
