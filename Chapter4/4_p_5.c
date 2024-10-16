#include <stdio.h>

int main()
{
	int first, second, third, forth, fifth, sixth,
		seventh, eighth, ninth, tenth, eleventh, twelfth;
	printf("Enter the first 13 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &forth, &fifth, &sixth,
		&seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);
	int total;
	total = 9 - ((3 * (second + forth + sixth + eighth + tenth + twelfth) +
		(first + third + fifth + seventh + ninth + eleventh) - 1) % 10);
	printf("Check digit: %d\n", total);
	return 0;
}