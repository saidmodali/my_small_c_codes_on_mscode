#include <stdio.h>
#include <ctype.h>


//hata nerede ?

int random_char(void)
{
	int c;
	while (!isalnum((c = rand() % 128)))
		;
	return c;
}


void print_random_password(void)
{
	srand((unsigned)time(NULL)); // hata burda ��nk� fordan �al���yor bu fonkisyon ve salisede hep ayn� degere e�leniyor.
	for (int i = 0; i < 10; ++i)
	{

		printf("%c", random_char());
	}
	printf("\n");
}



int main(void)
{

	for (int i = 0; i < 1000; ++i)
		print_random_password();



}