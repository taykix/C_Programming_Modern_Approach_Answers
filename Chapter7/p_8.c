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
		value = hours * 60.f + minutes;
	} else
	{
		value = (hours + 12) * 60.f + minutes;
	}


	if (value < (8 * 60 + 9 * 60 + 43) / 2.0f)
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
	else if (value <= (9 * 60 + 43 + 11 * 60 + 19) / 2.0f)
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	else if (value <= (12 * 60 + 47 + 11 * 60 + 19) / 2.0f)
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	else if (value <= (12 * 60 + 47 + 14 * 60) / 2.0f)
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	else if (value <= (15 * 60 + 45 + 14 * 60 ) / 2.0f)
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	else if (value <= (15 * 60 + 45 + 19 * 60) / 2.0f)
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	else if (value <= (19 * 60 + 21 * 60 + 20) / 2.0f)
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	else
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

	return 0;
}
