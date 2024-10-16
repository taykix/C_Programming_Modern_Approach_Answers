#include <stdio.h>

int main(void)
{
	int n, factorial;
	float e = 1.f;
	printf("Enter a value to approximate e: ");
	scanf("%d", &n);
	
	
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			factorial = 1;
			for (int j = i; j >= 1; j--)
			{
				factorial = factorial * j;
			}
			e = e + 1.f / factorial;
		}
	}
	printf("Approximated value of e = %f\n", e);
}