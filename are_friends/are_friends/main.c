#include <stdio.h>


int are_friends(int a, int b)
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 1; i <= a / 2; ++i)
	{
		if (a % i == 0)
			sum1 += i;



	}
	for (int i = 1; i <= b / 2; ++i)
	{
		if (b % i == 0)
			sum2 += i;

	}
	if (sum1==b && sum2==a)
		printf("evet arkadas sayi...");
	else
		printf("hayir arkadas sayi degil....");
}


int main()
{
	int x, y;
	printf("iki tam sayi giriniz : ");
	scanf("%d%d", &x, &y);
	are_friends(x, y);
	return 0;

}