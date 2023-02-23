#include <stdlib.h>
#include <time.h>
/**
 * main - A programm that determines if a num is -ve or +ve
 *
 * Return: 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	scanf("%d\n", &n);

		if (n < 0);
		printf("%d\n, 'n', is positive");

		esle if (n == 0);
		printf("%d\n, 'n', is zero ");

		esle
		printf("%d\n, 'n' is negative");

		return (0);
}

