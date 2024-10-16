#include <stdio.h>

int main()
{
	//Programming Projects 4
	int num1;
	int first, second, third, forth, fifth;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num1);
	fifth = num1 % 8;
	num1 /= 8;
	forth = num1 % 8;
	num1 /= 8;
	third = num1 % 8;
	num1 /= 8;
	second = num1 % 8;
	num1 /= 8;
	first = num1 % 8;
	printf("In octal, your number is: %d%d%d%d%d", first, second, third, forth, fifth);

	//Programming Project 5 -- i already did like that

}
