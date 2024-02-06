#include <stdio.h>

#define				SIZE				20000



int are_friends(int x, int y)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 1; i < x / 2 + 1; ++i)
	{
		if (x % i == 0)
			sum1 += i;
	}
	for (int i = 1; i < y / 2 + 1; ++i)
	{
		if (y % i == 0)
			sum2 += i;
	}
	return sum1 == y && sum2 == x;
}








int main(void)
{

	for (int i = 1; i < SIZE; ++i)
	{
		for (int k = 1; k < SIZE; ++k)
		{
			if ( i != k && are_friends(i, k))
				printf("%d and %d are frineds...\n", i, k);
		}
	}

}