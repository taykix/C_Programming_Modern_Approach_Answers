#include <stdio.h>

int main(void)
{
	int hours, minutes, diff;
	float value;
    int min = __INT_MAX__;
    int departure_times[8] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 9 * 60 + 45};
    int arrival_times[8] = {8 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};
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
    printf("Closest departure time is %.2d:%.2d a.m., arriving at %.2d:%.2d a.m.\n", arrival_times[ptr] / 60, arrival_times[ptr] % 60, departure_times[ptr] / 60, departure_times[ptr] % 60);

	return 0;
}