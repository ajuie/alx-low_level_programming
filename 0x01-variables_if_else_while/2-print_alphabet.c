#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabet in lower case
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
