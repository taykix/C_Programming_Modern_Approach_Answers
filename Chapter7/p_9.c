#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hours, minutes;
	char indicator;
	float value;

	printf("Please enter a 12-hour time: ");
	scanf("%d:%d %c", &hours, &minutes, &indicator);

	if (toupper(indicator) == 'A')
	{
		printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, minutes);
	} else
	{
		printf("Equivalent 24-hour time: %.2d:%.2d\n", hours + 12, minutes);
	}

	return 0;
}
