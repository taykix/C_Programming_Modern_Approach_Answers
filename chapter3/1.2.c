#include <stdio.h>

int main (void)
{
	int mm,dd,yyyy, num;
	float price;

	printf("Enter item number\n");
	scanf("%d", &num);

	printf("Enter unit price\n");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy)\n");
	scanf("%2d/%2d/%4d", &mm, &dd, &yyyy);
	printf("Item\tUnit\tPurchase\n    \tPrice\tDate\n%d\t$ %.2f %.2d/%.2d/%.4d\n",num, price, mm,dd,yyyy);

	return 0;
}
