#include <stdio.h>






int main()
{
	double num;
	printf("please enter a number :");
	scanf("%lf", &num);
	double reality = 0.001;
	double increment = 0.0001;
	double guess = 0.;



	while ((num - guess * guess) < 0 ? -(num - guess * guess) : (num - guess * guess) > reality )
	{
		guess += increment;
	}

	printf("the square root of your number : %f", guess);


}