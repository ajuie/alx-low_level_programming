#include<stdio.h>
/**
 * main -Entry point
 *
 * Description: Alphabet in lower and apper case
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
