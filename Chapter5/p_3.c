/* Calculates a broker's comission */

#include <stdio.h>

int main(void)
{
	float price_per_share, value, comission;
	int num_of_shares;

	printf("Enter price per share: ");
	scanf("%f", &price_per_share);
	printf("Enter number of shares: ");
	scanf("%d", &num_of_shares);

	value = price_per_share * num_of_shares;

	if (value < 2500.00f)
		comission = 30.00f + 0.017 * value;
	else if (value < 6250.00f)
		comission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		comission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		comission = 100.00f + .0022 * value;
	else if (value < 500000.00f)
		comission = 155.00f + .0011f * value;
	else
		comission = 255.00f + .0009f * value;

	if (comission < 39.00f)
		comission = 39.00f;

	printf("Comission: $%.2f\n", comission);

	// Rival commission

	if (num_of_shares < 2000)
	{
		comission = 33.00f + 0.3 * num_of_shares;
	}
	else
	{
		comission = 33.00f + 0.2 * num_of_shares;
	}

	printf("Rivalry Comission: $%.2f\n", comission);
	return 0;
}