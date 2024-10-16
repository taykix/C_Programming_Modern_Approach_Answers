#include <stdio.h>

int main (void)
{
	int gsi,group_id,pub_code, i_number, c_digit;

	printf("Enter a date ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &pub_code, &i_number, &c_digit);
	printf("GSI prefic: %d\n", gsi);
	printf("Group identifier: %d\n", group_id);
	printf("Publischer code: %d\n", pub_code);
	printf("Item number: %d\n", i_number);
	printf("Check digit: %d\n", c_digit);
	return 0;
}
