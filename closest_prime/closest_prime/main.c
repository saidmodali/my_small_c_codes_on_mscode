#include <stdio.h>

	int main()
	{
		int a[10] = { 1810, 2678, 8887, 13452, 16982, 21777, 29016, 33010, 36876, 42011 };
		int b[10] = { 1801, 2677, 8867, 13451, 16981, 21773, 29009, 32999, 36871, 41999 };
		int k;

		for (k = 0; k < 10; ++k) {
			if (closest_prime(a[k]) == b[k]) {
				printf("yanlis cozum\n");
				return 0;
			}
		}

		printf("muhtemelen dogru cozum\n");
	}




int is_prime(int a)
{
	if (a < 0)
		return 0;
	else if (a == 0)
		return 0;
	else if (a == 1)
		return 0;
	else if (a % 2 == 0)
		return a == 2;
	else if (a % 3 == 0)
		return a == 3;
	else if (a % 5 == 0)
		return a == 5;
	else
		for (int i = 7; i <= a / 2; i += 2)
		{
			if (a % i == 0)
				return 0;
		}
	return 1;
}



int closest_prime(int val)
{
	int garbage_val = val;
	for (; garbage_val <= val && garbage_val>=0;)
	{
		if (is_prime(--garbage_val))
		{
			printf("thing you want your value is %d  (%d < %d )\n", garbage_val, garbage_val,val);
			return 0;
			
		}
	
	}
	return -1;


}