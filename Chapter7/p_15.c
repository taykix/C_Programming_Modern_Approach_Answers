#include <stdio.h>

int main(void)
{
	int n, factorial;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	factorial = 1;
	for (size_t i = n; i > 0; i--)
	{
		factorial *= i;
	}
	printf("Factorial of %d: %d", n, factorial);
}
