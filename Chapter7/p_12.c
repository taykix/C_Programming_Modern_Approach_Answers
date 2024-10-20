#include <stdio.h>

int main()
{
	double result, new_number;
	char opr;
	printf("Enter an expression: ");
	scanf(" %lf", &new_number);
	result = new_number;
	opr = getchar();
	while(opr != '\n')
	{
		if (opr == '+')
		{
			scanf(" %lf", &new_number);
			result += new_number;
		} else if (opr == '*')
		{
			scanf(" %lf", &new_number);
			result *= new_number;
		} else if (opr == '-')
		{
			scanf(" %lf", &new_number);
			result += new_number;
		} else if (opr == '/')
		{
			scanf(" %lf", &new_number);
			result /= new_number;
		} else
		{
			printf("This operation is not supported.\n");
			return 1;
		}
		opr = getchar();
	}
	printf("Value of expression: %1lf", result);
	return 0;
}
