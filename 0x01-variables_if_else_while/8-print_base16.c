#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
