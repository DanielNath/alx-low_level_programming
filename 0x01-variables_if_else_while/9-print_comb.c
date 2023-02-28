#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10 from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
