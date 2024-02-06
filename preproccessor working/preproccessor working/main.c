#include <stdio.h>
#define absolute(a,b)     ( (a) - (b) >= 0 ? (a) - (b) : (b) - (a))
#define is_upper(y)    ((y) >= 'A' && y<= 'Z' ? 1 : 0)
#define to_upper(y)     ((y) >= 'A' && (y)<= 'Z' ? (y) : (y) - 'a' + 'A')
#define max3(a,b,c)      ((a )> (b) ? ((a)> (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))
#define max4(a,b,c,d)    ((d) > max3((a),(b),(c)) ? d : max3((a),(b),(c)))
#define clamp(val,low,high)    ((val) <=(low) ? (low) : ((val) >=(high) ? (high) : ((val) <=(high) && (val)>=(low) ? (val) : 9999)))
#define is_triangle(a,b,c)    (absolute((a),(b)) < (c) && (c) < (a) + (b) ? 1 : 0) 
int main()
{
	int x, y, z;
	printf("ucgen giriniz : ");
	scanf("%d%d%d", &x, &y, &z);
	if (is_triangle(x, y, z))
		printf("evet ucgen kurallarina uyuyor....");
	else
		printf("boyle bir ucgen olamaz ....!!!!!!");
	return 0;



}



