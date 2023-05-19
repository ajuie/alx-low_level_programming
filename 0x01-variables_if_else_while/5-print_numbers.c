#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printf numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
