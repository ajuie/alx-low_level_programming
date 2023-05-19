#include<stdio.h>
/**
 *main - Entry point
 *
 * Description: lower case alphabet in reverse
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;

	i = 'z';

	while (i > 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
