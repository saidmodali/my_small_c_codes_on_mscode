#include <stdio.h>

double max4(double a, double b, double c, double d)
{
	double max_val = a;
	if (b > max_val)
		max_val = b;
	if (c > max_val)
		max_val = c;
	if (d > max_val)
		max_val = d;
	return max_val;

}





int main()
{
	double x, y, z, t;
	printf("4 gercel sayi giriniz: ");
	scanf("%lf%lf%lf%lf", &x, &y, &z, &t);
	printf("girdiginiz bilgilere gore en buyuk gercel sayi : %f", max4(x, y, z, t));


}