#include <stdio.h>

int main(void)
{
	//Section 5.1.1
	printf("SECTION 5.1.1 ------\n");
	// 5.1.1.a
	// Expected Output: 1
	int i, j, k;
	i = 2; j = 3;
	k = i * j == 6;
	printf("%d\n", k);

	// 5.1.1.b
	// Expected Output : 1
	i = 5; j = 10; k = 1;
	printf("%d\n", k > i < j);

	// 5.1.1.c
	// Expected Output : 1
	i = 3; j = 2; k = 1;
	printf("%d\n", i < j == j < k);

	// 5.1.1.d
	// Expected Output : 0
	i = 3; j = 4; k = 5;
	printf("%d\n", i % j + i < k);

	//Section 5.1.2
	printf("SECTION 5.2 ------\n");
	// 5.1.2.a
	// Expected Output : 1
	i = 10; j = 5;
	printf("%d\n", !i < j);

	// 5.1.2.b
	// Expected Output : 1
	i = 2; j = 1;
	printf("%d\n", !!i + !j);

	// 5.1.2.c
	// Expected Output : 1
	i = 5; j = 0; k = -5;
	printf("%d\n", i < j || k);

	// 5.1.2.d
	// Expected Output : 1
	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k);

	//Section 5.1.3
	printf("SECTION 5.1.3 ------\n");
	// 5.1.3.a
	// Expected Output : 1 \n 3 4 5
	i = 3; j = 4; k = 5;
	printf("%d \n", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);

	// 5.1.3.b
	// Expected Output : 0 \n 7 8 9
	i = 7; j = 8; k = 9;
	printf("%d \n", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);

	// 5.1.3.c
	// Expected Output : 1 \n 8 8 9
	i = 7; j = 8; k = 9;
	printf("%d \n", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);

	// 5.1.3.d
	// Expected Output : 1 \n 2 1 1
	i = 1; j = 1; k = 1;
	printf("%d \n", i++ || ++j && ++k);
	printf("%d %d %d\n", i, j, k);

	//Section 5.1.4
	printf("SECTION 5.1.4 ------\n");
	i = -421;
	printf("%d\n", i < 0 ? -1 : (i == 0 ? 0 : 1));

	//Section 5.2.5
	printf("SECTION 5.2.5 ------\n");
	// These if statement is legal but its not doing the expected work
	// it checks (n >= 1) <= 10. so whatever the value of n it returns true.

	//Section 5.2.6
	printf("SECTION 5.2.6 ------\n");
	// This If statement is legal but its checking if n == -9
	int n = -9;
	if (n == 1 - 10)
		printf("n is between 1 and 10\n");

	//Section 5.2.7
	printf("SECTION 5.2.7 ------\n");
	// Expected value : if i is 17 : 17, if i is -17 still 17;
	i = 17;
	printf("%d\n", i >= 0 ? i : -i);
	i = -17;
	printf("%d\n", i >= 0 ? i : -i);

	//Section 5.2.8
	//if (age > 13)
	//{
	//	if (age <= 19)
	//		return true;
	//	else
	//		false;
	//}
	//else
	//	false;

	// or
	//if (age > 13 && age <= 10)
	//	return true;
	//else
	//	return false;

	//Section 5.2.9

	//Yes They are equivalent

	//Section 5.3.10
	printf("SECTION 5.3.10 ------\n");
	// Expected Output : onetwo
	i = 1;
	switch (i % 3)
	{
	case 0: printf("zero");
	case 1: printf("one");
	case 2: printf("two");
	}

	//Section 5.3.11

	int area_code;
	area_code = 229;

	switch (area_code)
	{
	case 229: 
		printf("Albany");
		break;
	case 404:
		printf("Atlanta");
		break;
	case 470:
		printf("Atlanta");
		break;
	case 478:
		printf("Macon");
		break;
	case 678:
		printf("Atlanta");
		break;
	case 706:
		printf("Columbus");
		break;
	case 762:
		printf("Columbus");
		break;
	case 770:
		printf("Atlanta");
		break;
	case 912:
		printf("Savannah");
		break;
	default:
		printf("Area code not recognized.")
		break;
	}
	printf("\n");


	return 0;
}

// First Session 45:00 focused minutes.
// Second Session 15:00 focused minutes.
// Third Session 16:00 focused minutes.
// Forth Session 30:00 focused minutes.
// Fifth Session 31:00 focused minutes.
// Sixth Session 57:00 focused minutes.