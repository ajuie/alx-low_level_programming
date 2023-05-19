#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Numbers in ascending order
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
