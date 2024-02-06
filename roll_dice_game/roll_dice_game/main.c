#include <stdio.h>
#include <stdlib.h>

#define NGAMES   10000000
int roll_dice(void)
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	return dice1 + dice2;

}

int game_(int dice)
{
	int new_dice;
	for (;;)
	{
		new_dice = roll_dice();
		if (new_dice == 7)
			return 0;
		if (new_dice == dice)
			return 1;
	}
}
// if game returns 1 , gamer wins
// if game returns 0 , gamer loses
int game(void)
{
	int dice = roll_dice();
	switch (dice) {
	case 7:
	case 11: return 1;
	case 2:
	case 3:
	case 12: return 0;
	default: return  game_(dice);

	}
}
int main(void)
{
	int win_count = 0;
	for (int i = 0; i < NGAMES; ++i)
	{
		win_count += game();

	}
	printf("oyuncunun kazanma olasiligi : %f", (double)win_count / NGAMES);

}