#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, result, i;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%d, ", a);
			result = a + b;
			a = b;
			b = result;
		}
		else
			printf("%d", a);
	}
	printf("\n");
	return (0);
}