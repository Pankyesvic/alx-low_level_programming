#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - returns alphabets both lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z');
{
putchar(ch);
ch++;
}
while (CH <= 'Z');
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
