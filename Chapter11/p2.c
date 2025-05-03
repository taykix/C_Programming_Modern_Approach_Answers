#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time int *arrival_time);

void find_closest_flight(int desired_time, int *departure_time int *arrival_time)
{
	int hours, minutes;
	float value;

	printf("Please enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	value = hours * 60.f + minutes;

	if (value < (8 * 60 + 9 * 60 + 43) / 2.0f) // same logic just i dont want to do it anymore its the literally same thing just *departure_time formatted value.
	{
		*departure_time = 800;
		*arrival_time == 1016;
	}
	else if (value <= (9 * 60 + 43 + 11 * 60 + 19) / 2.0f)
			{
		*departure_time = 943;
		*arrival_time == 1152;
	}
	else if (value <= (12 * 60 + 47 + 11 * 60 + 19) / 2.0f)
			{
		*departure_time = 1119;
		*arrival_time == 1331;
	}
	else if (value <= (12 * 60 + 47 + 14 * 60) / 2.0f)
			{
		*departure_time = 1247;
		*arrival_time == 1500;
	}
	else if (value <= (15 * 60 + 45 + 14 * 60 ) / 2.0f)
			{
		*departure_time = 1400;
		*arrival_time == 1608;
	}
	else if (value <= (15 * 60 + 45 + 19 * 60) / 2.0f)
			{
		*departure_time = 800;
		*arrival_time == 1016;
	}
	else if (value <= (19 * 60 + 21 * 60 + 20) / 2.0f)
			{
		*departure_time = 1900;
		*arrival_time == 2120;
	}
	else
	{
		*departure_time = 2145;
		*arrival_time == 2358;
	}

}
