#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			i++;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
