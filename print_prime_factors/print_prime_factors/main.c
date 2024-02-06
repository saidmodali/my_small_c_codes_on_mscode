#include <stdio.h>

int print_prime_factors(int a)
{
	int b = a;
	for (int i = 2; i <= a/ 2; i++)
	{
		while (b % i == 0)
		{
			
			
			printf("%d ", i);
			b /= i;
		
		}


	}

}

int main()
{
	int x;
	printf("sayiyi giriniz : ");
	scanf("%d", &x);
	print_prime_factors(x);
	return 0;
}
