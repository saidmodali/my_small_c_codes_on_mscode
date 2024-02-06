#include <stdio.h>

int isperfect(int a)
{
	int i = 1;
	int sum_divisors = 0;
	while (i< a) 
	{

		if (a % i == 0)
			sum_divisors += i;
		++i;

	}
	return a == sum_divisors;

}
int main()
{
	int i = 0;
	while (i < 10000)
	{
		if (isperfect(i))
			printf("%d sayisi perfecttir.\n", i);
		++i;

	}
}