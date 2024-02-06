#include <stdio.h>

int get_digital_root(int val)
{
	int sum = 0;
	while (sum)
	{
		sum += val % 10;
		val /= 10;
	}
	int sum2 = 0;
	if ((sum / 10) > 0)
	{
		while (sum)
		{
			sum2 += sum % 10;
			sum /= 10;
		}
		printf("%d", sum2);
	}
	else
		printf("%d", sum);
}


int main()
{
	int x;
	printf("enter a number : ");
	scanf("%d", &x);
	get_digital_root(x);
	return 0;

}