#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

void pb(int n)
{
	if (n != 0)
	{
		pb(n/2);
		putchar('0' + n % 2);
	}
}

int non_rec_fact(int num)
{
	int result, i;

	result = 1;
	i = 1;
	while (num >= 1)
	{
		result *= i++;
		num--;
	}
	return result;
}

int fact(int num)
{
	if (num == 1)
		return 1;
	else
		return num * fact(num - 1);
}

double median(double x, double y, double z)
{
	return x >= y ? (y >= z ? y : z) : ( (x >= z ? x : (y >= z ? z : y))); 
}

bool has_zero(int a[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
	
	return false;
}

int evaluate_position(char board[8][8])
{
		// Q,R,B,N,P
		int black_points;
		int white_points;
		int if_upper;

		black_points = 0;
		white_points = 0;
		for(int i = 0; i < 8; i++)
				for(int j = 0; j < 8; j++)
				{
						if_upper = isupper(board[i][j]);
						switch (tolower(board[i][j]))
						{
								case 'q':
										if(if_upper)
												white_points += 9;
										else
												black_points += 9;
										break;
								case 'r':
										if(if_upper)
												white_points += 5;
										else
												black_points += 5;
										break;
								case 'b':
										if(if_upper)
												white_points += 3;
										else
												black_points += 3;
										break;
								case 'n':
										if(if_upper)
												white_points += 3;
										else
												black_points += 3;
										break;
								case 'p':
										if(if_upper)
												white_points += 1;
										else
												black_points += 1;
										break;

						}

				}
		return white_points - black_points;
}

double inner_product(double a[], double b[], int n)
{
		int inner_product;

		inner_product = 0;
		for(int i = 0; i < n; i++)
				inner_product += a[i] * b[i];
		return inner_product;
}

double compute_GPA(char grades[], int n)
{
		float gpa;

		gpa = 0.0;
		for(int i = 0; i < n; i++)
		{
				switch (tolower(grades[i]))
				{
						case 'a':
								gpa += 4;
								break;
						case 'b':
								gpa += 3;
								break;
						case 'c':
								gpa += 2;
								break;
						case 'd':
								gpa += 1;
								break;
				}
		}
		return gpa / n;
}

int exercise10(int values[], int length, char subtask)
{
		if(subtask == 'a')
		{
				int max = -2147483648;

				for(int i = 0; i < length; i++)
				{
						if (values[i] > max)
								max = values[i];
				}
				return max;
		} else if (subtask == 'b')
		{
				int sum = 0;

				for(int i = 0; i < length; i++)
				{
						sum += values[i];
				}
				return sum / length;
		} else if (subtask == 'c')
		{
				int count_p = 0;

				for(int i = 0; i < length; i++)
				{
						if (values[i] > 0)
								count_p++;
				}
				return count_p;
		}
}

double triangle_area(double base, double height)
{
		double product;

		product = base * height;
		return product / 2;
}

int check(int x, int y, int n)
{
		return x > 0 && y > 0 && x <= n-1 && y < n-1;
}

int rec_gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return rec_gcd(b, a % b);
}

int gcd(int a, int b)
{
		int remainder;

		remainder = 0;
		while(a != 0)
		{
				remainder = b % a;
				b = a;
				a = remainder;
		}
		return b;
}

int day_of_year(int month, int day, int year)
{
		int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int day_of_year;

		day_of_year = 0;
		for(int i = 0; i < month - 1; i++)
		{
				day_of_year += month_days[i];
		}
		if (year % 4 == 0 && month > 2)
		{
				if(year % 100 == 0)
				{
						if( year % 400 == 0)
								day_of_year++;
				} else 
						day_of_year++;		

		}
		return day_of_year + day;
}

int num_digits(int n)
{
		int digit_count;

		digit_count = 0;
		if (n == 0)
				return 1;

		while (n > 0 )
		{
				digit_count++;
				n /= 10;
		}
		return digit_count;
}

int digit(int n, int k)
{
		for(int i = 0; i < k - 1; i++)
		{
				n /= 10;	
		}
		return n % 10;
}

int main(void)
{
// it will print out the binary number of given input
printf("output of 5 ");
pb(5);
printf("\noutput of 7 ");
pb(7);
printf("\noutput of 10 ");
pb(10);
printf("\n");
//		printf("gcd of 246 60 = %d\n", rec_gcd(246, 60));
//	printf("fact 4 = %d, fact 3 = %d, fact 7 = %d\n", non_rec_fact(4), non_rec_fact(3),non_rec_fact(7));
//	printf("fact 4 = %d, fact 3 = %d, fact 7 = %d\n", fact(4), fact(3), fact(7));
//	printf("median for 4 5 6: %lf, median for 5 5 2 : %lf median for 1, 1, 1 : %lf median for 6 5 4: %lf\n", median(4, 5, 6), median(5, 5, 2), median(1, 1, 1), median(6, 5, 4));
//		char board[8][8] = {
//				{'r', '.', '.', '.', 'k', '.', '.', 'r'},       // 2 black rooks, 1 black king
//				{'p', 'p', 'p', '.', '.', 'p', 'p', 'p'},       // 7 black pawns
//				{'.', '.', '.', 'b', '.', '.', '.', '.'},       // 1 black bishop
//				{'.', '.', '.', '.', 'p', '.', '.', '.'},       // 1 black pawn
//				{'.', '.', '.', 'P', '.', '.', '.', '.'},       // 1 white pawn
//				{'.', '.', '.', '.', 'B', '.', '.', '.'},       // 1 white bishop
//				{'P', '.', 'P', '.', '.', 'P', 'P', 'P'},       // 7 white pawns
//				{'R', '.', '.', '.', 'K', '.', '.', 'R'}        // 2 white rooks, 1 white king
//		};
//		printf("evaluateing a position on board : %d\n", evaluate_position(board));
		//double values[] = {1, 2, 3, 1, 2, 2, 0};
		//double values1[] = {1, 2, 3, 1, 2, 2, 0};
		//printf("inner product of int values[] = {1, 2, 3, 1, 2, 2, 0} x2 is %f\n", inner_product(values, values1, 7));
		//char grades[] = {'A', 'B', 'a', 'a', 'A'};
		//printf("gpa of the  grades[] = {'A', 'B', 'a', 'a', 'A'} is : %f\n", compute_GPA(grades, 5));
		//int values[] = {12, 24, -42, -12, 214, 425, 0};
		//	printf("values is 12 24 -42 -12 214 425 0,  answers a: %d, b: %d, c: %d\n", exercise10(values, 7, 'a'), exercise10(values, 7, 'b'), exercise10(values, 7, 'c'));
		//	ex 9 output will be 1 and 2 because copy of arguments are passed to swap, not variable adresses aka pointer to a variable.
		//	ex 8 a and b only valid types. c has no argument type, it will automatically cast it to int. d has no type of function. Error in C99 and int in C89
		//	ex 7 all statements are legal. what a dumb question lmfao
		//	printf("digit of 829,1 = %d 829,2 = %d 4142,4 = %d\n", digit(829,1), digit(829,2), digit(4142,4));
		//	printf("digit count of 25: %d, 1312: %d, 214215: %d\n", num_digits(25), num_digits(1312), num_digits(214215));
		//	printf("day of year 12 12 1994 = %d, 12 12 1996 %d\n", day_of_year(12, 12, 1994), day_of_year(12, 12, 1996));
//		printf("gcd of 246 60 = %d\n", gcd(246, 60));
		//	printf("check 0 ? %d, check 1 ? %d\n", check(1,1,0), check(1, 2, 4));
		//	printf("triangle area is: %f\n", triangle_area(4.2, 5));
		return 0;
}
