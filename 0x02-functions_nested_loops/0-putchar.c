#include <stdio.h>
/**
 * main - a program that prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	char cha[7] = "putchar";
	int i;

	{
		putchar('_');
	}
	for (i = 0; i < 8; i++)
	{
		putchar(cha[i]);
	}
	putchar('\n');
	return (0);
}
