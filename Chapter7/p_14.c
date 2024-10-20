#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y, new_y, diff;

	printf("Enter a positive number: ");
	scanf("%lf", &x);
	y = 1;
	do
	{
		new_y = (y + x/y) / 2;
		diff = fabs(new_y - y);
		y = new_y;
	} while (diff >= 0.00001 * y);

	printf("Square root: %lf", y);
}
