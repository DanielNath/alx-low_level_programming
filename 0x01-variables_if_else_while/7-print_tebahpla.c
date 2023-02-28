#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10 from 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
	putchar(chr);
	}
	putchar('\n');
	return (0);
}
