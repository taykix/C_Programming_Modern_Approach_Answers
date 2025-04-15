#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int roll_dice(void)
{
	int first, second;
	first = rand() % 6 + 1;
	second = rand() % 6 + 1;

	return first + second;
}

bool play_game(void)
{
	int point;
	int dices;
	bool is_first;
	
	point = 0;
	is_first = 1;
	dices = roll_dice();
	printf("You rolled: %d\n", dices);
	if (is_first)
	{
		if (dices == 7 || dices == 11)
			return true;
		else if (dices == 2 || dices == 3 || dices == 12)
			return false;
		else
		{
			point = dices;
			printf("Your point is %d\n", point);
		}
	}
	while(dices != 7)
	{
		dices = roll_dice();
		printf("You rolled: %d\n", dices);
		if (dices == point)
			return true;
		else if (dices == 7)
			return false;
	}
	
}

int main(void)
{
	char ch;
	int wins,loses;

	srand((unsigned)time(NULL));
	wins = 0;
	loses = 0;
	while(1)
	{
		if(play_game())
		{
			printf("You win!\n");
			wins++;
		}
		else
		{
			printf("You lose!\n");
			loses++;
		}
		printf("Play again?: ");
		scanf(" %c", &ch);
		if (ch == 'y' || ch == 'Y'){}
		else
		{
			printf("\nWins: %d, Losses %d\n", wins, loses);
			break;
		}
}	}
