#include <stdio.h>
#include "nutility.h"


#define			SIZE				100


void get_min_max(int* array, int size, int** ppmin, int** ppmax)
{
	*ppmin = array;
	*ppmax = array;
	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] > **ppmax)
			*ppmax = &array[i];
		if (array[i] < **ppmin)
			*ppmin = &array[i];
	}

}

int main()
{
	int* pmin, * pmax;
	int a[SIZE];
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	get_min_max(a, SIZE, &pmin, &pmax);
	printf("en buyuk deger : %d ve index : %d\n", *pmax, (int)(pmax - a));
	printf("en kucuk deger : %d ve index : %d\n", *pmin, (int)(pmin - a));
	return 0;


}