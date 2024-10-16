#include <stdio.h>

int main(void)
{
	unsigned int knot;

	printf("Please enter the knot number: ");
	scanf("%d", &knot);

	if (knot < 1)
		printf("Calm\n");
	else if (knot <= 3)
		printf("Light air");
	else if (knot <= 27)
		printf("Breeze");
	else if (knot <= 47)
		printf("Gale");
	else if (knot <= 63)
		printf("Storm");
	else
		printf("Hurricane");
}