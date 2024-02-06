#include <stdio.h>
#include <conio.h>

int main()
{
	int sum = 0;
	int cnt = 0;
	int x;
	int ch;
	int max, min;
	while (1)
	{
		printf("tam sayi girecek misiniz(e) or (h) ?\n");
		while ((ch = _getch()) != 'e' && ch != 'h')
			;
		if (ch == 'e')
		{
			printf("\nsayiyi giriniz: ");
			scanf("%d", &x);
			++cnt;
			sum += ch;
		}
		if ((ch == 'h'))
		{


			printf("hayir dediniz...\n");
			break;
		}
		if (cnt == 1)
			max = min = x;
		if (x > max)
			max = x;
		if (x < min)
			min = x;


	}
	if (cnt == 0)
		printf("\nhic sayi girmediniz..");
	else
	{
		printf("\n%d kadar sayi girdiniz..", cnt);
		printf("\ngirdiginiz sayilarin toplami %d", sum);
		printf("\ngirdiginiz sayilarin ortalamasi % d", sum / cnt);
		printf("\nmax : %d  min : %d", max, min);
	}

}
