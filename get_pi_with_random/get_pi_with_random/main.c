#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define        NPO�NTS            1000000000




int main()
{
	int count_in = 0;
	srand(78);
	for (int i = 0; i < NPO�NTS; ++i)
	{
		double x = (double)rand() / RAND_MAX;
		double y = (double)rand() / RAND_MAX;

		double is_in_circle = x * x + y * y;

		if (is_in_circle <= 1.)
			++count_in;

	}
	printf("pi ===> %f", 4. * ((double)count_in / NPO�NTS));
}