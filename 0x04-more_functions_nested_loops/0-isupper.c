#include "main.h"

/**
 * _isupper - check the upper case letter.
 *@c: inputs an integer
 *
 * Return: 1 for upper case . 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
