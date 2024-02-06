#include <stdio.h>


int is_harshad(void)
{
	int cnt = 0;
	for (int i = 0 ; i<100000 ; ++i)
	{
		int sum = 0;
		int garbage_i = i;
		while (garbage_i)
		{
			sum += garbage_i % 10;
			garbage_i /= 10;

		}
		if (sum != 0 && i % sum == 0)
		{
			printf("%d is a harshad number....\n",i);
			++cnt;

		}
		if (cnt == 100)
			return 0;
	}

}

int main()
{
	is_harshad();

	
}
