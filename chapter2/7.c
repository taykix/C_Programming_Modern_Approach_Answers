#include <stdio.h>

int	main(void)
{
	int dollar;
	printf("Enter a dollar amount : ");
	scanf("%d", &dollar);
	printf("$20 bills: %d\n", dollar / 20);
	dollar = dollar - (dollar / 20) * 20;
	printf("$10 bills: %d\n", dollar / 10);
	dollar = dollar - (dollar / 10) * 10;
	printf("$5 bills: %d\n", dollar / 5);
	dollar = dollar - (dollar / 5) * 5;
	printf("$1 bills: %d\n", dollar / 1);
	return 0;
}
