#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) {
	char reminders[MAX_REMIND][MSG_LEN+9];
	char day_and_hour_str[9], msg_str[MSG_LEN+1];
	int day,month, hour, i, j, num_remind = 0;

	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		printf("Enter day and month in month/day format, than a 24-hour time and reminder: ");

		if(scanf("%2d/%2d %2d", &month, &day, &hour) < 3)
            break;
		if (day == 0 && month == 0 && hour == 0)
			break;
        if (day < 0 || day > 31)
            continue;
		sprintf(day_and_hour_str, "%2d/%2d %2d", month, day, hour);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_and_hour_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);
		
		strcpy(reminders[i], day_and_hour_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay Reminder \n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
	
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}
