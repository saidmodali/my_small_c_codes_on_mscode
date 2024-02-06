#include <stdio.h>

#define			SIZE							100

int is_harshad(int x)
{
	int copy_x = x;
	int sum_digits = 0;

	while (copy_x)
	{
		sum_digits += copy_x % 10;
		copy_x /= 10;
	}

	if (sum_digits != 0 && x % sum_digits == 0) 
		return 1;
	return 0;
}



int main(void)
{
	int harshad_box[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20, 21, 24, 27,   // here are the some harshad numbers
		30, 36, 40, 42, 45, 48, 50, 54, 60, 63, 70, 72, 80, 81, 84, 90, 100, 102, 108,
		110, 111, 112, 114, 117, 120, 126, 132, 133, 135, 140, 144, 150, 152, 153, 156, 162,
		171, 180, 190, 192, 195, 198, 200
	};

	for (int i = 0; harshad_box[i] != 0; ++i)
		if (!is_harshad(harshad_box[i]))
		{
			printf("it must be an issue please again .....");
			return -1;
		}
	printf("RIGHT!");
	return 0;
}