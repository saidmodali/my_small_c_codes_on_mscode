#include <stdio.h>
#include <string.h>
#define   asize(a)                (sizeof (a) / sizeof (a[0]))



int main()
{
	const char* names[] = {
		"ahmet", "nagehan", "ayse", "gulsum" , "rabia", "ali", "meltem","aban", "acan"
	};
	for (size_t i = 0; i < sizeof(names) / sizeof(names[0]) - 1; ++i)
		for (size_t k = 0; k < asize(names) - 1 - i; ++k)
		{
			if (strlen(names[k]) > strlen(names[k + 1]) || (strlen(names[k]) == strlen(names[k + 1]) && strcmp(names[k], names[k + 1]) > 0))
			{
				char* temp = (char*)names[k];
				names[k] = names[k + 1];
				names[k + 1] = temp;

			}

		}


	for (size_t i = 0; i < asize(names); ++i)
		printf("%s\n", names[i]);
	printf("isimler basari ile siralandi...");

}