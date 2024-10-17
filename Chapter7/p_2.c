#include <stdio.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d,", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0)
		{
			char a;
			a = getchar(); /* ungets '\n' from buffer */
			while (1)
			{
				printf("Press Enter to continue...");
				a = getchar();
				if (a == '\n')
					break;
			}

		}
	}

	return 0;
}
