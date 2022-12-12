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
int ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++;);
{
putchar(ch);
}
for (ch = 'A': ch <= 'Z'; ch++;);
{
putchar(ch);
}
putch('\n');
return (0);
}
