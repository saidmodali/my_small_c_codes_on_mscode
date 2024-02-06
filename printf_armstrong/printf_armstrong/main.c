#include <stdio.h>
#include <math.h>

void print_armstrong(void)
{
	for (int i = 0; i <1000000000; ++i)
	{
		int a = i;
		int b = i;
		int mod = 0;
		int n_digit = 0;
		int result1 = 1;
		int result2 = 0;
		while (a)
		{
			n_digit++;
			a /= 10;

		}
		while (b)
		{
			mod = b % 10;
			b /= 10;
			for (int i2 = 0; i2 < n_digit; ++i2)
			{
				result1 *= mod;
			}
			
			result2 += result1;
			result1 = 1;


		}
		if (result2 == i)
			printf("%d\n", i);

	}
	
}


int main()
{
	printf("here are the armstrong numbers for <1000000000\n");
	print_armstrong();

}