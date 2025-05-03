#include <stdio.h>

void reduce(int numerator, int dominator, int *reduced_numerator, int *reduced_denominator);



void reduce(int numerator, int dominator, int *reduced_numerator, int *reduced_denominator)
{	
	int  on, om, remainder;
	on = numerator;
	om = dominator;
	remainder = 0;

	while (numerator != 0)
	{
		remainder = dominator % numerator;
		dominator = numerator;
		numerator = remainder;
	}
	*reduced_numerator = on / dominator;
	*reduced_denominator = om / dominator;


}


int main(void)
{
	int n, m, on, om, remainder, *reducedn, *reducedm;

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
	reducedn = &n;
	reducedm = &m;
	printf("In lowest terms: %d/%d\n", on/m, om/m);
	reduce(10, 24, reducedn, reducedm);
	printf("In lowest terms: %d/%d", *reducedn, *reducedm);


}
