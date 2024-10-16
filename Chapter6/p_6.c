#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i * i <= num; i++)
	{
		if (i * i % 2 == 0)
		{
			printf("%d\n", i * i);
		}
	}

	return 0;
}