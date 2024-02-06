#include <stdio.h>

int print_back(int a)
{
	int mod = 0;
	while (a)
	{
		mod = a % 10;
		a /= 10;
		printf("%d", mod);
		

	}
	return 0;
}
int main()
{
	int x;
	printf("saiyiyi giriniz : ");
	scanf("%d", &x);
	print_back(x);
}