#include <stdio.h>


int get_triangle(int a)
{
	int b = a;
	int c = a;
	int d = a + 1;
	int e = a;
	for (int i = 0; i < a; ++i)
	{
		for (; b; --b)
		{
			printf(" ");
		}
		--c;
		b = c;
		for (; e < d; ++e)
			printf(" *");
		printf("\n");
		++d;
		e = a;



		
	}





}
int main()
{

	for (int i = 0; i <= 10;++i)
	{
		get_triangle(i);
	}
}
