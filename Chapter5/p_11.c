#include <stdio.h>

int main(void)
{
	int num, first_dig, second_dig;
	printf("Enter a two-digit number: ");
	scanf("%d", &num);

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
	switch (first_dig)
	{
	case 9:
		printf("ninty-");
		break;
	case 8:
		printf("eighty-");
		break;
	case 7:
		printf("seventy-");
		break;
	case 6:
		printf("sixty-");
		break;
	case 5:
		printf("fifty-");
		break;
	case 4:
		printf("fourty-");
		break;
	case 3:
		printf("thirty-");
		break;
	case 2:
		printf("twenty-");
		break;
	case 0:
		break;
	}
	second_dig = num % 10;
	switch (second_dig)
	{
	case 9:
		printf("nine.");
		break;
	case 8:
		printf("eigh.");
		break;
	case 7:
		printf("seven.");
		break;
	case 6:
		printf("six.");
		break;
	case 5:
		printf("five.");
		break;
	case 4:
		printf("four.");
		break;
	case 3:
		printf("three.");
		break;
	case 2:
		printf("two.");
		break;
	case 1:
		printf("one.");
		break;
	case 0:
		break;
	}

	return 0;
}