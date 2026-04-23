#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int month, day, year;
	char * months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Oktober", "November", "December"};

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("You entered the date %s %d, %d/n", months[month - 1], day, year);

	return 0;
}
