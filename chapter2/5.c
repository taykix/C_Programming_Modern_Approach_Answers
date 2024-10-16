#include <stdio.h>

int	main(void)
{
	int x;
	printf("Enter the x");
	scanf("%d", &x);
	printf("value of the polynomial = %d", 3 * x * x * x * x * x
										+ 2 * x * x * x * x
										- 5 * x * x * x
										- x * x
										+ 7 * x
										- 6);
	return 0;
}
