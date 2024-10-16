#include <stdio.h>

int main(void)
{
	float num, big;
	big = 0;
	do {
		printf("Enter a number: ");
		scanf("%f", &num);
		big = num > big ? num : big;
	} while (num > 0);

	printf("The largest number entered was %.2f \n", big);
}