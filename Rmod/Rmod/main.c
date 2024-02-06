#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	printf("iki gercel sayi giriniz: ");
	scanf("%lf%lf", &x, &y);
	printf("%f sayisinin %f sayisina bolumunden kalan: %f", x, y, fmod(x, y));


}