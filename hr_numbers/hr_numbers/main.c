#include <stdio.h>
#include <math.h>


// N = A3+ B3 = C3 + D3 

void hr_numbers(void)
{ //main func
	int N;
	int a, b,c,d;
	for (N = 0; N < 100000; ++N)  // for 1
	{// for 1
		for (a = 0; a < 100; ++a)  // for 2
		{ // for 2
			for (b = 0; b < 100; ++b)  // for 3
			{// for 3
				if (pow(a, 3) + pow(b, 3) == N)  // if 1
				{
					for (c = 0; c< 100; ++c)  //for 4
					{//for 4
						for (d = 0; d < 100; ++d)  //for 5
						{//for 5

							if (a != b && a != c && a != d && b != c && b != d && (pow(c,3) + pow(d,3) == N)) // if 2
							{// if 2
								printf("%d  %d %d %d  %d\n ", N,a,b,c,d);
							}// if 2
						}//for 5

					}//for 4
					

				}// if 1



			}// for 3
		} // for 2
	}// for 1



}//main func


int main()
{
	printf("here are the all hr numbers : \n");
	hr_numbers();
}