#include <stdio.h>

int main(void)
{
	int factorial;
	float e, n = 1.f;
	printf("Enter a small floating point : ");
	scanf("%f", &n);


	if (n > 0)
	{
		for (int i = 1; 1; i++)
		{
			factorial = 1;
			for (int j = i; j >= 1; j--)
			{
				factorial = factorial * j;
			}
			if (1.f / factorial < n)
			{
				printf("%f is smaller than %f therefore we are stopping.\n", 1.f / factorial, n);
				break;
			}
			e = e + 1.f / factorial;
		}
	}
	printf("Approximated value of e = %f\n", e);
}