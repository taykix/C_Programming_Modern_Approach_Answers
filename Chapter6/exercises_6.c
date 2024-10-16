#include <stdio.h>

int main(void)
{
	int i = 1, j;

	// Section 6.1
	printf("\nSection 6.1 ----\n");
	// Expected output :  2 4 8 16 32 64 128

	while (i <= 128)
	{
		printf("%d ", i);
		i *= 2;
	}

	// Section 6.2
	printf("\nSection 6.2 ----\n");
	// Expected output :  9384 938 93 9

	i = 9384;
	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	// Section 6.3
	printf("\nSection 6.3 ----\n");
	// Expected output : 5 4 3 2

	for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
		printf("%d ", i);

	// Section 6.3.4
	// c) is not the same, because i is incementing AFTER the condition, in other cases its before.

	// Section 6.3.5
	// c) is not the same with others, because codeblock got runned before condition once.

	// Section 6.3.6
	printf("\nSection 6.3.6 ----\n");
	for (int i = 1; i <= 128; printf("%d ", i), i *= 2);

	// Section 6.3.7
	printf("\nSection 6.3.7 ----\n");
	for (int i = 9384; i > 0; printf("%d ", i), i /= 10);

	//// Section 6.3.8
	//printf("\nSection 6.3.8 ----\n");
	//// Expected Output : 10 5 3 2 1 1...(and endless stream of 1s)
	//for (i = 10; i >= 1; i /= 2)
	//	printf("%d ", i++);

	//// Section 6.3.9
	//printf("\nSection 6.3.9 ----\n");
	//int i = 10;
	//while (i >= 1)
	//{
	//	printf("%d ", i++);
	//	i /= 2;
	//}

	// Section 6.4.10
	printf("\nSection 6.4.10 ----\n");
	i = 10;
	while (i > 0)
	{
		i--;
		if (i == 4)
		{
			continue;
		}
		printf("%d ", i);
	}
	printf("\nEquals \n");
	i = 10;
	while (i > 0)
	{
		start:;
		i--;
		if (i == 4)
		{
			goto  start;
		}
		printf("%d ", i);
	}

	// Section 6.4.11
	printf("\nSection 6.4.11 ----\n");
	// The program sums up even numbers 0 till 9;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		if (i % 2)
			continue;
		sum += i;
	}
	printf("%d \n", sum);

	// Section 6.4.12
	printf("\nSection 6.4.12 ----\n");
	for (d = 2; d * d <= n; d++)
	{
		if (n % d == 0)
		{
			break;
		}
	}

	// Section 6.5.13
	//for (n = 0; m > 0; m /= 2, n++);

	// Section 6.5.14
	// Extra semicolon at the end of the if follows a null statement. it needs to be deleted
	// for program functions


	return 0;
}

// First Session 17:00 concentrated minutes.
// Second Session 26:00 concentrated minutes.
// Third Session 19:00 concentrated minutes.