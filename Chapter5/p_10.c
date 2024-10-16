#include <stdio.h>

int main(void)
{
	int grade;
	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade > 100 || grade < 0)
	{
		printf("Grade is not right.");
		return 1;
	}
	else if (grade == 100) {
		printf("Letter grade: A\n");
		return 0;
	}
	grade /= 10;
	switch (grade)
	{
	case 9 :
		printf("Letter grade: A\n");
		break;
	case 8:
		printf("Letter grade: B\n");
		break;
	case 7:
		printf("Letter grade: C\n");
		break;
	case 6:
		printf("Letter grade: D\n");
		break;
	default:
		printf("Letter grade: F\n");
		break;
	}

	return 0;
}
