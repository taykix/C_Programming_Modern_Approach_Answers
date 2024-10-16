#include <stdio.h>

int	main(void)
{
	float loan;
	float interest_rate;
	float monthly_payment;
	float montly_interest_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	montly_interest_rate = interest_rate / 100 / 12;

	loan += (loan * montly_interest_rate );
	loan -= monthly_payment;
	printf("Balance remaining after first payment: %0.2f \n", loan);

	loan += (loan * montly_interest_rate );
	loan -= monthly_payment;
	printf("Balance remaining after second payment: %0.2f \n", loan);

	loan += (loan * montly_interest_rate );
	loan -= monthly_payment;
	printf("Balance remaining after third payment: %0.2f \n", loan);
	return 0;
}
