#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = 'a';
int CH = 'A';
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
