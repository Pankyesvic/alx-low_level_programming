#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	char la;

	la = '0';
	while (la <= '9')
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
