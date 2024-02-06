#include <stdio.h>

int the_day_of_year(int a, int b, int c)
{
	if (1 == b)
		return a;
	else if (2 == b)
		return 31 + a;
	else if (3 == b)
	{
		if (c % 4 == 0)
			return a + 60;
		else
			return a + 59;
	}
	else if (4 == b)
	{
		if (c % 4 == 0)
			return a + 91;
		else
			return a + 90;
	}
	else if (5 == b)
	{
		if (c % 4 == 0)
			return a + 121;
		else
			return a + 120;
	}
	else if (6 == b)
	{
		if (c % 4 == 0)
			return a + 152;
		else
			return a + 151;
	}
	else if (7 == b)
	{
		if (c % 4 == 0)
			return a + 182;
		else
			return a + 181;
	}
	else if (8 == b)
	{
		if (c % 4 == 0)
			return a + 213;
		else
			return a + 212;
	}
	else if (9 == b)
	{
		if (c % 4 == 0)
			return a + 244;
		else
			return a + 243;
	}
	else if (10 == b)
	{
		if (c % 4 == 0)
			return a + 274;
		else
			return a + 273;
	}
	else if (11 == b)
	{
		if (c % 4 == 0)
			return a + 305;
		else
			return a + 304;
	}
	else if (12 == b)
	{
		if (c % 4 == 0)
			return a + 335;
		else
			return a + 334;
	}
	return 0;
}
	

	int main()
	{
		int day, month, year;
		printf("tarihi bosluk birakarak giriniz: ");
		scanf("%d%d%d", &day, &month, &year);
		printf("girdiginiz bilgilere gore yilin %d.gunudur...", the_day_of_year(day, month, year));

	}