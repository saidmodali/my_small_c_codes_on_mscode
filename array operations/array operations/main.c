#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int print(int max, int mid, int min)
{
	printf("%d %c %d %c %d", max, max > mid ? '>' : '=', mid, mid > min ? '>' : '=',min);
}

int arrange_numbers(int a, int b, int c)
{
	if (a >= b && b >= c)
		print(a, b, c);
	else if (b >= a && a >= c)
		print(b, a, c);
	else if (c >= a && a >= b)
		print(c, a, b);
	else if (a >= c && c >= b)
		print(a, c, b);
	else if (b >= c && c >= a)
		print(b, c, a);
	else if (c >= b && b >= a)
		print(c, b, a);
}




int main()
{
	int x, y, z;
	for (;;)
	{
		printf("\nenter 3 numbers : ");
		scanf("%d%d%d", &x, &y, &z);
		arrange_numbers(x, y, z);
		
	}
	


}
	