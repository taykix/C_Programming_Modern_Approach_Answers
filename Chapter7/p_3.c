#include <stdio.h>

int main(void)
{
	long double n, sum = 0;

	printf("This program sums a seris of integers. \n");
	printf("Enter integers (0 to terminate): ");
	scanf("%Lf", &n);

	while (n != 0) {
		sum += n;
		scanf("%Lf", &n);
	}
	printf("The sum is: %Lf\n", sum);

	return 0;
}
