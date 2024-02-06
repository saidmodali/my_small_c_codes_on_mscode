#include <stdio.h>


#define				SIZE				10000000000000000000
#define				SUB_SIZE			100



void is_hardy_ramanujan(int x)
{
	static int b[100] = { 0 };
	b[4];
	for (int a = 0 ; a < SUB_SIZE; ++a)
		for(int b = 1; b < SUB_SIZE; ++b)
			if (x == a * a * a + b * b * b)
			{
				for (int c = 2; c < SUB_SIZE; ++c)
					for (int d = 3; d < SUB_SIZE; ++d)
					{
						if (a != b && a != c && a != d && b != c && b != d && b != d)
							if (x == c * c * c + d * d * d)
							{
								
									printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", x, a, b, c, d);
								
							}
					}
			}
	


}

int main()
{
	for (int i = 0; i < SIZE; ++i)
	{
		is_hardy_ramanujan(i);
	}
	

	return 0;

}