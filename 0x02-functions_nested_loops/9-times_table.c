#include "main.h"
#include <stdio.h>
/**
 *times_table - 9times table
 *
 *Return: Always mul
 */
void times_table(void)
{
	int i, j, mul, rem, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;

			if (mul > 9)
			{
				rem = mul % 10;
				res = (mul - rem) / 10;

				putchar(44);
				putchar(32);
				putchar(res + '0');
				putchar(rem + '0');
			}
			else
			{
				if (j != 0)
				{
					putchar(44);
					putchar(32);
					putchar(32);
				}

				putchar(mul + '0');
			}
		}

		putchar('\n');
	}
}
