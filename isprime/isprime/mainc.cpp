#include <stdio.h>

int isprime(int val)
{
	if (val < 2)
		return 0;

	else if (val % 2 == 0)
		return val == 2;

	else if (val % 3 == 0)
		return val == 3;

	else if (val % 5 == 0)
		return val == 5;

	for (int i = 7; i < val / 2; i += 2)
	{
		if (val / i == 0)
			return 0;

	}
	return 1;
}

int main()
{
	int cnt = 0;
	int low, high;
	printf("bir aralik giriniz : ");
	scanf("%d%d", &low, &high);


	for (int i = low; i < high; ++i)
	{
		if (isprime(i))
		{
			printf("%d ", i);
			++cnt;
		}

	}
}