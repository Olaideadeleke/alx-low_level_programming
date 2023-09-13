#include <stdio.h>


int main(void)
{
	long long a, b, i, result;

	a = 1;
	b = 2;
	for (i = 1; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%lld, ", a);
			result = a + b;
			a = b;
			b = result;
		}
		else
		{
			printf("%lld", a);
		}
	}
	printf("\n");
}
