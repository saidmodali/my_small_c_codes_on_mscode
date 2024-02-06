#include <stdio.h>

int main()
{
	int day, hour, min, sec;

	printf("gun saat dakika ve saniye giriniz: ");
	scanf("%d%d%d%d", &day, &hour, &min, &sec);
	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	day += hour / 24;
	hour %= 24;
	printf("girdiginiz bilgilere gore %dgun\n%dsaat\n%ddakika\n%dsaniye",day,hour,min,sec);
	return 0;

}