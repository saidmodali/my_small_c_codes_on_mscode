#include <stdio.h>

int is_prime(int b)
{
	if (b == 1)
		return 0;
	if (b % 2 == 0)
		return b == 2;
	else if (b % 3 == 0)
		return b == 3;
	else if (b % 5 == 0)
		return b == 5;
	else
	{
	
		for (int i = 7; i <= b / 2; i += 2)
			if (b % i == 0)
				return 0;



	}
	return 1;

}

int is_superprime(int a)
{
	int b = 0;
	for (int i = 1; i <= a; ++i)
	{
		if (is_prime(i))
			++b;
	}
	if (is_prime(b))
		printf("%d super asaldir...", a);
	else
		printf("%d super asal degildir...", a);



}



int main()
{
	int x;
	printf("bir tam sayi giriniz : ");
	scanf("%d", &x);
	if (is_prime(x))
		is_superprime(x);
	else
		printf("\ngirdiginiz sayi asal degil...");
	
}
