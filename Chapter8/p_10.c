#include <stdio.h>

int main(void)
{
	int hours, minutes, diff;
	float value;
    int min = __INT_MAX__;
    int departure_times[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 9 * 60 + 45};
    int arrival_times[8] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
	printf("Please enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
    value = hours * 60.f + minutes;
    int ptr;
    for (int i = 0; i < 8; i++)
    {
        diff = departure_times[i] - value;
        if (diff < 0)
            diff *= -1;
        if (diff < min)
        {
            min = diff;
            ptr = i;
        }
    }
    int departure_hour = departure_times[ptr] / 60;
    int departure_minute = departure_times[ptr] % 60;
    int arrival_hour = arrival_times[ptr] / 60;
    int arrival_minute = arrival_times[ptr] % 60;

    // Departure time
    if (departure_hour >= 12) {
        printf("Closest departure time is %.2d:%.2d p.m., ", 
            departure_hour == 12 ? 12 : (departure_hour - 12), 
            departure_minute);
    } else {
        printf("Closest departure time is %.2d:%.2d a.m., ", 
            departure_hour == 0 ? 12 : departure_hour, 
            departure_minute);
    }

    // Arrival time
    if (arrival_hour >= 12) {
        printf("arriving at %.2d:%.2d p.m.\n", 
            arrival_hour == 12 ? 12 : (arrival_hour - 12), 
            arrival_minute);
    } else {
        printf("arriving at %.2d:%.2d a.m.\n", 
            arrival_hour == 0 ? 12 : arrival_hour, 
            arrival_minute);
    }

    

	return 0;
}