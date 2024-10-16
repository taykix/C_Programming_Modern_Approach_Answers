#include <stdio.h>

int	main(void)
{
	int x;
	printf("Enter the x");
	scanf("%d", &x);
	printf("value of the polynomial = %d", ((((3 * x + 2) * x - 5)* x - 1)* x + 7) * x - 6);
	return 0;
}
