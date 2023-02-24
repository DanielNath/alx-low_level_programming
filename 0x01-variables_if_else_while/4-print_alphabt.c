#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	putchar(alp[i]);

	putchar('\n');
	return (0);
}
