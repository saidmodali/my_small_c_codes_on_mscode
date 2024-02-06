#include <stdio.h>


#define				SIZE			100000

int get_factorial(int x)
{
	if (x <= 0)
		return 1;

	return x * get_factorial(x - 1);
}


int is_factorion(int x)
{
	int sum_factorial = 0;
	int copy_x = x;

	while (x)
	{
		sum_factorial += get_factorial(x % 10);
		x /= 10;

	}

	return sum_factorial == copy_x;
}

int main(void)
{
	printf("there are 4 factorion numbers :\n");

	for (int i = 1; i < SIZE; ++i)
	{
		if (is_factorion(i))
			printf("%d\n", i);
	}

	return 0;

}