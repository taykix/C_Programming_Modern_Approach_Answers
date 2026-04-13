#include <stdio.h>

int main(void)
{
	int num, first_dig, second_dig;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	char * tens_place[] = { "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	char *  units_place[] = { "", "one.",  "two.", "three.", "four.", "five.", "six.", "seven.", "eight.", "nine."};


    if (num > 100 || num < 0)
	{
		printf("Number is not right.");
		return 1;
	}
	printf("You entered the number ");
	if (num == 11)
	{
		printf("eleven.");
		return 0;
	} else if (num == 12)
	{
		printf("twelve.");
		return 0;
	}
	else if (num == 13)
	{
		printf("thirteen.");
		return 0;
	}
	else if (num == 14)
	{
		printf("fourteen.");
		return 0;
	}
	else if (num == 15)
	{
		printf("fifteen.");
		return 0;
	}
	else if (num == 16)
	{
		printf("sixteen.");
		return 0;
	}
	else if (num == 17)
	{
		printf("seventeen.");
		return 0;
	}
	else if (num == 18)
	{
		printf("eighteen.");
		return 0;
	}
	else if (num == 19)
	{
		printf("nineteen.");
		return 0;
	}
	first_dig = num / 10;
	printf("%s", tens_place[first_dig]);
    second_dig = num % 10;
    if (second_dig == 0)
        printf(".");
    else
        printf("-");
	printf("%s", units_place[second_dig]);

    return 0;
}
