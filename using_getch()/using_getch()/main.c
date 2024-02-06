#include <stdio.h>
#include <conio.h>

int main()
{
	int c1, c2, c3, c4;
	printf("enter your password : ");
	c1 = _getch();
	printf("*");
	c2 = _getch();
	printf("*");
	c3 = _getch();
	printf("*");
	c4 = _getch();
	printf("*");
	printf("\nyour password is : %c%c%c%c", c1, c2, c3, c4);

}