#include <stdio.h>



int isleap(int year)
{
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}



void day_of_year(int day, int month, int year)
{
	int sum = 0;
	int flag = 0;

	switch (month - 1)
	{

	case 11: sum += 30;// fallthrough
	case 10: sum += 31;// fallthrough
	case 9:  sum += 30;// fallthrough
	case 8:  sum += 31;// fallthrough
	case 7:  sum += 31;// fallthrough
	case 6:  sum += 30;// fallthrough
	case 5:  sum += 31;// fallthrough
	case 4:  sum += 30;// fallthrough
	case 3:  sum += 31;// fallthrough
	case 2:  sum += isleap(year) ? 29 : 28;// fallthrough
	case 1:  sum += 31;// fallthrough
	case 0:  break;
	default: flag = 1; printf("invalid enter...");

	}
	if (!flag)
	{
		sum += day;
		printf("the day of year is : %d\n and isleap logical value : %d", sum, isleap(month));
	}
}




int main(void)
{
	int day, month, year;
	printf("please enter day, mounth, year respectively : ");
	scanf("%d%d%d", &day, &month, &year);
	day_of_year(day, month, year);
	return 0;

}