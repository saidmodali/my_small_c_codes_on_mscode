#include <stdio.h>


int i_max3(int a, int b, int c)
{
	int max;
	if (a >= b && a >= c)
		max = a;
	else if (b >= a && b >= c)
		max = b;
	else
		max = c;
	return max;

}

double d_max3(double a, double b, double c)
{
	double max;
	if (a >= b && a >= c)
		max = a;
	else if (b >= a && b >= c)
		max = b;
	else
		max = c;
	return max;
}




int main(void)
{
	int a, b, c;
	double d, e, f;
	printf("please enter 3 numbers as an integer : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("please enter 3 number as a double : ");
	scanf("%lf%lf%lf", &d, &e, &f);
	printf("in integer max number is : %d\n", i_max3(a, b, c));
	printf("in double max number is : %f\n", d_max3(d, e, f));


}