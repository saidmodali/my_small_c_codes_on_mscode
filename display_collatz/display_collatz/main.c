#include <stdio.h>

void display_collatz(unsigned long long a)
{
	int cnt = 1;
	printf("%d ", a);
	while (1)
	{

		if (a == 1)
		{
			printf("\n\n%d elemanlidir..", cnt);
			return;

		}
		if (a % 2 == 0)
		{
			a /= 2;
			printf("%llu ", a);
			cnt++;
		}
		else
		{
			a = a * 3 + 1;
			printf("%llu ", a);
			cnt++;
		}
	
			
	}

}

int main()
{
	unsigned long long x;
	printf("sayiyi giriniz : \n");
	scanf("%llu", &x);
	display_collatz(x);
	return 0;
}