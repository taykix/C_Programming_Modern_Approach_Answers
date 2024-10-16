#include <stdio.h>

int main(void)
{
	int income;
	float tax;

	printf("Please enter the amount of taxable income: ");
	scanf("%d", &income);

	if (income < 750)
		tax = income / 100.f;
	else if (income <= 2250)
		tax = 2 * income / 100.f + 7.5;
	else if (income <= 3750)
		tax = 3 * income / 100.f + 37.5;
	else if (income <= 5250)
		tax = 4 * income / 100.f + 82.5;
	else if (income <= 7000)
		tax = 5 * income / 100.f + 142.5;
	else
		tax = 6 * income / 100.f + 230.0;

	printf("Tax due is %.2f", tax);
}