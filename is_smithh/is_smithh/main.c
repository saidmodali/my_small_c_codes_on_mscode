#include <stdio.h>

int isprime(int a)
{
	if (a < 2)
		return 0;
	if (a % 2 == 0)
		return a == 2;
	else if (a % 3 == 0)
		return a == 3;
	else if (a % 5 == 0)
		return a == 5;
	else for (int i = 7; i <= a / 2; i += 2)
	{
		if (a % i == 0)
			return 0;

	}
	return 1;

}

int is_smith(int b)
{
	int x1 = b;
	int x2 = b;
	int sum_prime = 0;
	int sum_digit = 0;
	int c;
	int d;
	

	while (x1)
	{
		sum_digit += x1 % 10;
		x1 /= 10;
	}
	while (x2 % 2 == 0)
	{
		sum_prime += 2;
		x2 /= 2;
	}
	for (int i2 =3 ; i2 <= b / 2; i2 += 2)
	{
		c = i2;
	    d = i2;
		while(x2%c==0)
		{

			while (d)
			{
				sum_prime += d % 10;
				d /= 10;
			}
			x2 /= c;

		}


	}
	if (sum_prime == sum_digit)
		printf("%3d  is a smith \n", b);








}

int main()
{
	printf("here are the all smith numbers for <10000\n");
	for (int i = 2; i < 1000; ++i)
	{
		if (!isprime(i))
			is_smith(i);
		else
			continue;
	}

}