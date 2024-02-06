#include <stdio.h>


int get_digit_root(int x)
{
	int sum = 0;
	int sum2 = 0;
	int sum3 = 0;
	while (x)
	{
		sum += x % 10;
		x /= 10;

	}
	while (sum)
	{
		sum2 += sum % 10;
		sum /= 10;


	}

	while (sum2)
	{
		sum3 += sum2 % 10;
		sum2 /= 10;

	}
	return sum3;

}




int main(void)
{

	int x;
	printf("please enter a number that will be calculated digital root :");
	scanf("%d", &x);
	printf("== %d\n", get_digit_root(x));


}