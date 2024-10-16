#include <stdio.h>

int main(void)
{
	int first, second, third, fourth;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &first, &second, &third, &fourth);

	if (first > second)
	{
		if (third > fourth)
			printf(first > third ? "first" : "third");
		else
			printf(first > fourth ? "first" : "fourth");
	}
	else {
		if (third > fourth)
			printf(second > third ? "second" : "third");
		else
			printf(second > fourth ? "second" : "fourth");
	}
}