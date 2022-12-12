#include <stdio.h>

/**
 * main - print alphabet in lowwer case
 * followed by a new line, excep q and e
 *Return: Always 0 (Sucees)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
