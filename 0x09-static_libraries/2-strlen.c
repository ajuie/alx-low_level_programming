#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s : inputs a string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
