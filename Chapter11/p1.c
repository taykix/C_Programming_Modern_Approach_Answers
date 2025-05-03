#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens,
				int *fives, int*ones);


void pay_amount (int dollars, int *twenties, int *tens, int *fives, int* ones)
{
	int dollar, *twenties, *tens, *foves, *ones;

	printf("Enter a dollar amount : ");
	scanf("%d", &dollar);
	*twenties = (dollar / 20);
	dollar = dollar - (dollar / 20) * 20;
	*tens = dollar / 10;
	dollar = dollar - (dollar / 10) * 10;
	*fives = dollar / 5;
	dollar = dollar - (dollar / 5) * 5;
	*ones = dollar;
}
