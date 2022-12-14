#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char la;

	la = 'a';

	while (la <= 'z')
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
