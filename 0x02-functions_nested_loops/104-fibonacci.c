#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: result
 */

int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;
	unsigned int result;

	a = 1;
	b = 2;
	printf("%u, %u, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		result = a + b;
		a = b;
		b = result;

		if (i != 98)
		{
			printf("%u, ", result);
		}
		else
		{
			printf("%u\n", result);
		}
	}
}
