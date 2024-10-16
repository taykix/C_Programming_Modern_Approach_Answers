#include <stdio.h>

int main(void)
{
	int n, m, on, om, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n, &m);
	on = n;
	om = m;
	remainder = 0;

	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("In lowest terms: %d/%d", on/m, om/m);
}