#include <stdio.h>


void get_symbol_comparison(int x, int y, int z)
{
	if (x == y == z)
		printf("%d = %d = %d\n", x, y, z);
	else if (x == y && x > z)
		printf("%d = %d > %d\n", x, y, z);
	else if (x == y && x < z)
		printf("%d > %d = %d\n", z, y, x);
	else if (x == z && y < x)
		printf("%d = %d > %d\n", x, z, y);
	else if (x == z && y > x)
		printf("%d > %d = %d\n", y, x, z);
	else if (z == y && z > x)
		printf("%d > %d = %d\n", z, x, y);
	else if (z == y && z < x)
		printf("%d = %d > %d\n", z, y, x);
	else if (x > y && x > z)
		y > z ? printf("%d > %d > %d\n", x, y, z) : printf("%d > %d > %d\n", x, z, y);
	else if (y > x && y > z)
		x > z ? printf("%d > %d > %d\n", y, x, z) : printf("%d > %d > %d\n", y, z, x);
	else
		x > y ? printf("%d > %d > %d\n", z, x, y) : printf("%d > %d > %d\n", z, y, x);
	
}


int main(void)
{
	int x, y, z;
	while(1)
	{
	printf("please enter 3 numbers for comparison : ");
	scanf("%d%d%d", &x, &y, &z);
	get_symbol_comparison(x, y, z);
	}
}