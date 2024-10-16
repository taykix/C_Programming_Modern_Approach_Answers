#include <stdio.h>

int main(void)
{
	int num;
	int fnum;
	int digit_count;

	printf("Enter a number: ");
	scanf("%d", &fnum);

	if (fnum < 0)
	{
		printf("-");
		fnum *= -1;
	}
	while (fnum)
	{
		printf("%d", fnum % 10);
		fnum /= 10;
	}
	return 0;
}