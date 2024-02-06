#include <stdio.h>

int max4(int n1, int n2, int n3, int n4)
{
	int max;
	if (n1 >= n2 && n1 >= n3 && n1 >= n4)
		max = n1;
	else if (n2 >= n1 && n2 >= n3 && n2 >= n4)
		max = n2;
	else if (n3 >= n1 && n3 >= n2 && n3 >= n4)
		max = n3;
	else
		max = n4;
	return max;



}



int main(void)
{
	int n1, n2, n3, n4;
	printf("please 4 numbers : ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
	printf("the biggest number is : %d\n",max4(n1, n2, n3, n4));
	return 0;



}