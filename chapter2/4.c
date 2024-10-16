#include <stdio.h>

int	main(void)
{
	float dollar;
	printf("Enter a dollar amount : ");
	scanf("%f", &dollar);
	printf("With tax added: $%0.2f", dollar + 5.0f*dollar / 100.0f);
	return 0;
}
