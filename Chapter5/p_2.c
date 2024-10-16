#include <stdio.h>

int main(void)
{
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	if (hours > 12)
	{
		if (hours == 24)
		{
			printf("Equivalent 12-hour time: 00:%.2d AM", minutes);
		}
		else {
			printf("Equivalent 12-hour time: %.2d:%.2d PM", hours % 12, minutes);
		}
	}
	else {
		printf("Equivalent 12-hour time: %.2d:%.2d AM", hours, minutes);
	}
	return 0;
}
