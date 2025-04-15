#include <stdio.h>

int power(int x, int n)
{
	if (n == 0)
	return 1;
	else
	return x * power(x, n - 1);
} 

int main(void)
{
	int a,b;
	
	printf("Please Enter 2 integers\n");
	scanf("%d %d", &a, &b);
	printf("Power of %d and %d is %d\n", a, b, power(a,b));
	return 0;
}
