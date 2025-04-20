#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[5][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2*/

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
	for(;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
}

bool if_card_exists(int rank, int suit)
{
	for(int i = 0; i < 5;  i++)
	{
		if (hand[i][0] == rank && hand[i][1] == suit)
			return true;
	}
	return false;
}

void clear_hand(int hand[NUM_CARDS][2])
{
	for(int i = 0; i < NUM_CARDS; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			hand[i][j] = -1;
		}
	}
}
void print_hand(int hand[NUM_CARDS][2])
{
	for(int i = 0; i < NUM_CARDS; i++)
	{
		printf("card %d RANK %d SUIT %d\n", i, hand[i][0], hand[i][1]);
	}
	printf("\n");
}
void read_cards(void)
{
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;
	
	clear_hand(hand);
	while (cards_read < NUM_CARDS)
	{
		bad_card = false;

		printf("Enter a card: ");
		rank_ch = getchar();
		switch (rank_ch) {
			case '0':			exit(EXIT_SUCCESS);
			case '2':			rank = 0; break;
			case '3':			rank = 1; break;
			case '4':			rank = 2; break;
			case '5':			rank = 3; break;
			case '6':			rank = 4; break;
			case '7':			rank = 5; break;
			case '8':			rank = 6; break;
			case '9':			rank = 7; break;
			case 't':case 'T':	rank = 8; break;
			case 'j':case 'J':	rank = 9; break;
			case 'q':case 'Q':	rank = 10; break;
			case 'k':case 'K':	rank = 11; break;
			case 'a':case 'A':	rank = 12; break;
			default: bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch)
		{
			case 'c': case'C': suit = 0; break;
			case 'd': case'D': suit = 1; break;
			case 'h': case'H': suit = 2; break;
			case 's': case'S': suit = 3; break;
			default:		bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card)
			printf("Bad card; ignored.\n");
		else if (if_card_exists(rank,suit))
			printf("Duplicate card; ignored.\n");
		else {
			hand[cards_read][0] = rank;
			hand[cards_read][1] = suit;
			cards_read++;
		}
	}

}

void analyze_hand(void)
{
	int num_consec = 0;
	int rank, suit;
	straight = true;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	print_hand(hand);
	/* sort the cards */
	for(int i = 1; i < NUM_CARDS; i++)
	{
		for (int j = 0; j < NUM_CARDS - i; j++)
		{
			rank = hand[j][0];
			suit = hand[j][1];
			if (hand[j + 1][0] < rank)
			{
				hand[j][0] = hand[j + 1][0];
				hand[j][1] = hand[j + 1][1];
				hand[j + 1][0] = rank;
				hand[j + 1][1] = suit;
			}
		}
	}
	print_hand(hand);
	/* check for flush */
	suit = hand[0][1];
	for(int i = 1; i < NUM_CARDS; i++)
	{
		if (hand[i][1] != suit)
			flush = false;
	}
	
	/* check for straight */
	for(int i = 0; i < NUM_CARDS - 1; i++)
	{
		if (hand[i][0] + 1 != hand[i + 1][0])
			straight = false;
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (rank = 0; rank < NUM_RANKS; rank++) {
		int run = 1;
		int hold_rank = hand[rank][0];
		for(int j = rank + 1; j < NUM_RANKS; j++)
		{
			if (hold_rank == hand[j][0])
				run++;
			else 
				break;
		}
		if (run == 4)
			four = true;
		else if (run == 3)
			three = true;
		else if (run == 2)
			pairs++;
		rank += run - 1;
	}
}

void print_result(void)
{
	if (straight && flush) 					printf("Straight flush");
	else if (four)							printf("Four of a Kind");
	else if (three && pairs == 1)			printf("Full house");
	else if (flush)							printf("Flush");
	else if (straight)						printf("Straight");
	else if (three)							printf("Three of a kind");
	else if (pairs == 2)					printf("Two pairs");
	else if (pairs == 1)					printf("Pair");
	else									printf("High card");
	
	printf("\n\n");
}
