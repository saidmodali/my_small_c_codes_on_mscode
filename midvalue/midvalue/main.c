#include <stdio.h>

int get_mid(int a, int b, int c)
{
	if (!(a<b && a<c || a>b && a>c))
		return a;
	else if (!(b<a && b<c || b>a && b>c))
		return b;
	else
		return c;

}

int main()
{
	int x, y, z;
	printf("uc tam sayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);
	printf("uc sayinin ortancasi: %d",get_mid(x,y,z));


}