#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define			SIZE		20

int main()
{
	int a[SIZE];
	int lights[SIZE] = { 0 };

	srand((unsigned)time(0));
	for (int i = 0; i < 20; ++i) {
		a[i] = rand() % 20 + 1;
		printf("%d ", a[i]);
	}
	printf("\n\n\n");
	int max = a[0];
	for (int i = 0; i < SIZE; ++i)
		if (max < a[i])
			max = a[i];
	int limit = max;
	for (int i = 0; i < max; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			if (a[j] == limit)
			{
				lights[j] = 1;
			}
		}
		--limit;
		for (int k = 0; k < SIZE; ++k)
		{
			if (lights[k] == 0)
				printf("     ");
			else
				printf("*    ");
		}
		printf("\n");



	}
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%2d   ", a[i]);
	}

	printf("\n\n\n\t\t*******************................. it was done by said modali........********************");

}