#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = (n % 10);

	if (lastd < 0)
	{
		lastd = (-1 * lastd);
	}

	_putchar(lastd + '0');
	return (lastd);
}
