#include <stdio.h>

int main(void)
{
	float comission, value;

	do
	{
		printf("Enter value of trade: ");
		scanf("%f", &value);

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
		if (value == 0)
			break;
		printf("Comission: $%.2f\n", comission);
	} while (value != 0);

	return 0;
}