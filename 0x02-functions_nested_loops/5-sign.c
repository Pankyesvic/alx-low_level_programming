#include "main.h"

/**
 * print_sign - print sign of number
 * @n: the int to check
 * Return: 1 and print + if n is graeter than 0
 * 0 and print 0 if n is zero
 * -1 and print - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
