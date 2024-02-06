#include <stdio.h>

#define  SIZE					10
//
//int unrand()
//{
//	static int box[SIZE];
//	static flag = 0;
//	if (!flag)
//	{
//		for (int i = 0; i < SIZE; ++i)
//			box[i] = -1;
//		flag = 1;
//	}
//
//	int luck_num;
//	int error_count;
//out1:
//	luck_num = rand() % SIZE ;
//	error_count = 0;
//	
//	for (int i = 0; i < SIZE; ++i)
//	{
//		if (box[i] == i)
//			++error_count;
//		if (error_count == SIZE)
//		{
//			for (int i = 0; i < SIZE; ++i)
//			{
//				if (box[i] == -1)
//				printf("* ", box[i]);
//				else
//				printf("%d ", box[i]);
//
//			}
//			return -1;
//		}
//			
//	}
//
//	for (int i = 0; i < SIZE; ++i)
//	{
//		if (i == luck_num && box[i] == luck_num)
//		{
//			printf("%d zaten var tekrar deneniyor...\n",i);
//			
//			goto out1;
//		}
//		
//			if (i == luck_num && box[i] != luck_num)
//			{	
//				box[i] = luck_num;
//				printf("%d eklendi...\n", luck_num);
//				for (int i = 0; i < SIZE; ++i)
//				{
//					if (box[i] == -1)
//						printf("* ", box[i]);
//					else
//						printf("%d ", box[i]);
//
//				}
//				return luck_num;
//
//			}
//
//	}
//
//
//}
//
//
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//
//	while (unrand() != -1)
//	{
//		getchar();
//		
//	}
//	printf("finished...");
//}


//
//int urand(void)
//{
//	static box[SIZE] = { 0 };
//	static cnt = 0;
//	int val;
//
//	if (cnt == SIZE)
//		return -1;
//
//	for (;;)
//	{
//		val = rand() % SIZE;
//		if (box[val] == 0)
//		{
//			box[val] = 1;
//			break;
//		}
//
//	}
//	++cnt;
//	return val;
//}
//
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < SIZE; ++i)
//	{
//		printf("%d ", urand());
//	}
//	printf("\n");
//	printf("hata degeri : %d", urand());
//}