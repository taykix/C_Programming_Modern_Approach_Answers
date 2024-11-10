#include <stdio.h>

int main(void)
{
    int digit_occurences[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		digit_occurences[digit] += 1;
		n /= 10;
	}

    printf("Reapeated digit(s): \t\t");
    for (int i = 0; i < 10; i++)
    {
        if (digit_occurences[i] > 1)
            printf("%d ", i);
    }
    printf("\n");
	return 0;
}