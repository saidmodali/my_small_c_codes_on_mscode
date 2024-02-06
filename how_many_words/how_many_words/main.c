#include <stdio.h>

#define    SIZE									100
#define    INWORD                               1
#define    OUTWORD                              0

void sgets(char* p)
{
	int c;

	while ((c = getchar()) != '\n')
		*p++ = c;

	*p = '\0';
}

int main(void)
{
	char a[SIZE];
	printf("please enter any : ");
	sgets(a);

	int word_flag = OUTWORD;
	int word_count = 0;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (isspace(a[i]))
			word_flag = OUTWORD;
		else if (word_flag == OUTWORD)
		{
			++word_count;
			word_flag = INWORD;

		}
	}

	printf(" %d kelime var...", word_count);


}
