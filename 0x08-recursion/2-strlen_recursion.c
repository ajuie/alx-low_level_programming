#include "main.h"

/**
 * _strlen_recursion -  printd the lengh of a string
 * @s: pointer to a string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = len + _strlen_recursion(s + 1) + 1;
	}
	return (len);
}

