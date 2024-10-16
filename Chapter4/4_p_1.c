#include <stdio.h>

int main()
{
	//Programming Projects 1
	int num1, num2;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &num1, &num2);
	
	printf("The reversal is: %d%d\n", num2 , num1);
	//Programming Projects 2
	int num3;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);

	printf("The reversal is: %d%d%d\n", num3, num2, num1);
	return 0;

	//Programming Projects 3 -- I did that already in 2

	//Programming Projects 4
	int first, second, third, forth, fifth;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num1);
	num1 /= 8;
	fifth = num1 % 8;
	num1 /= 8;
	forth = num1 % 8;
	num1 /= 8;
	third = num1 % 8;
	num1 /= 8;
	second = num1 % 8;
	num1 /= 8;
	first = num1 % 8;
	printf("In octal, your number is: %d%d%d%d%d", first, second, third, forth, fifth );

}
