#include <stdio.h>

// I didn't use the if statements, i assumed the entered number is int so i calculated the digits.
// But it could be done with couple of if statements.

int main(void)
{
	int num;
	int fnum;
	int digit_count;
	printf("Enter a number: ");
	scanf("%d", &num);

	digit_count = 0;
	if (num == 0)
	{
		printf("The number 0 has 1 digit.");
		return 0;
	}
	fnum = num;
	while (num > 0)
	{
		num = num / 10;
		digit_count++;
	}
	printf("The number %d has %d digits", fnum, digit_count);
	return 0;
}
