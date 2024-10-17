#include <stdio.h>

//smallest n causing the failure when int 46341.
//smalles n causing the failure when short 182.
//smalles n causing the failure when long 3037000500.
// On my machine size of int: 4 size of short: 2 size of long 8 bytes
int main(void)
{
	short i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d,", &n);

	for (i = 1; i <= n; i++)
		printf("%10hd          %10hd\n", i, i * i);

	return 0;
}
