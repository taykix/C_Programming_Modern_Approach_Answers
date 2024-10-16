#include <stdio.h>

int main(void)
{
	int ndays, sday;
	printf("Enter number of days in month: ");
	scanf("%d", &ndays);
	printf("Enter startubg day of the week (1=Sun, 7= Sat): ");
	scanf("%d", &sday);

	for (int i = 1; i < sday; i++)
		printf("   ");

	for (int i = 1; i <= ndays; i++, sday++)
	{
		printf("%2d ", i);
		if (sday % 7 == 0) {
			printf("\n");
		}
	}
}