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


	for (i = 1; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%u, ", a);
			result = a + b;
			a = b;
			b = result;
		}
		else
		{
			printf("%u\n", a);
		}
	}
	return (0);
}
