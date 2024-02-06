#include <stdio.h>

#define				SIZE				100000

int is_smith(int x)
{
	int cpy_x = x;
	int cpy_x2 = x;
	int sum_digits = 0;  //// 734 = 7 + 3 + 4
	int sum_divisiors = 0;

	while (cpy_x)
	{
		sum_digits += cpy_x % 10;
		cpy_x /= 10;

	}

	for (int i = 2; i < x / 2 + 1; ++i)
	{
		while (cpy_x2 % i == 0)
		{
			if (i >= 10)
			{
				int k = i;
				while (k)
				{
					sum_divisiors += k % 10;
					k /= 10;
				}
				cpy_x2 /= i;
			}
			else
			{
				sum_divisiors += i;
				cpy_x2 /= i;
			}
		}


	}
	return sum_digits == sum_divisiors;


}






int main(void)
{
	printf("here are the smith numbers for range 1 and 100000");
	for (int i = 0; i < SIZE; ++i)
	{
		if (is_smith(i))
			printf("%d\n", i);
	}
}