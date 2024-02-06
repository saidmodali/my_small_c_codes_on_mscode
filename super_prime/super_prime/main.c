#include <stdio.h>



int is_prime(int x)
{

	if (x % 2 == 0)
		return x == 2;
	else if (x % 3 == 0)
		return x == 3;
	else if (x % 5 == 0)
		return x == 5;
	else
		for (int i = 7; i < x / 2 + 1; i += 2)
		{
			if (x % i == 0)
				return 0;
		}
	return 1;
}



int is_super_prime(int ival)
{
	if (!is_prime(ival))
	{
		printf("girdiginiz sayi asal bile degil...");
		return 0;
	}

	int prime_idx = 0;
	int i;
	for (i = 2; i <= ival; ++i)
	{
		if (is_prime(i))
			++prime_idx;
	}

	if (is_prime(prime_idx))
	{
		printf("%d. %d super asali", prime_idx, ival);
		return 1;

	}
	else
		printf("super asal degil...");
	return 0;

}


int main(void)
{
	int x;
	printf("lutfen bir sayi girin : ");
	scanf("%d", &x);
	is_super_prime(x);
	return 0;



}