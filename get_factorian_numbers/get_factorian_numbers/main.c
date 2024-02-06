#include <stdio.h>

int find_factorial(int a)
{
	if (a == 1)
	{
		return 1;
	}
	return a * find_factorial(a - 1);
}

int get_factorion(void)
{
	
	for (int i = 1; i < 100000; ++i)
	{
		int sum = 0;  // summerizing factorials of the i
		int a = i;   // protecting for 'i'
		while (a)
		{
			sum += find_factorial(a % 10);
			a /= 10;

			
			
		}
		if (i == sum)
		{
			printf("%d sayisi bir factoriondur.. \n",i);
		}
	}
	printf("biti...");
	return 0;
}

int main()
{
	get_factorion();
}