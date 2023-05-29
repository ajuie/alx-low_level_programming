#include "main.h"

/**
 * _puts - printf the string
 * @str: inputs a string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

