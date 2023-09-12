#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	size_t a, b, sum, i;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", a);
			sum = a + b;
			a = b;
			b = sum;
		}
		else
			printf("%ld", a);
	}
	printf("\n");
	return (0);
}
