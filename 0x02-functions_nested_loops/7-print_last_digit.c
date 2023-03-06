#include "main.h"

/**
 * print_last_digit  - prints the last digit of a number
 * @n: the nummber  to be extract last digit
 * Return:value of the last digits
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)

	last = -last

	_putchar(last + '0');
	return (last);
}
