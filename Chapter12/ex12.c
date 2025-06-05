#include <stdio.h>
#include <stdbool.h>


int main()
{
		//Ex1 :
		//int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
		//int *p = &a[1], *q = &a[5];

		// a) 14
		// b) 34
		// c) 4 (memory address substraction)
		// d) They are on stack, stack grows from top to botom. from bigger adress to lower. true.
		// e) *q is 2 and *p is 15, so its false;
		//printf("a) %d\n b) %d\n c) %ld\n d) %d\n e) %d\n", *(p+3), *(q-3),q - p, p < q, *p < *q);
		//printf("p address = %p\n q address = %p\n", p, q);

		// Ex2: 
		// So i also learned from answers, pointers cannot be added. so middle = low + (high - low) / 2 would work because its adding a integer;

		//Ex3
		// assumtion : 10 ,9 ,8, 7, 6, 5, 4, 3, 2, 1
		//	#define N 10

		//	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		//	int *p = &a[0], *q = &a[N-1], temp;

		//	while (p < q)
		//	{
		//		temp = *p;
		//		*p++ = *q;
		//		*q-- = temp;
		//	}
		//	int i = 0;
		//	while (i < N)
		//	{
		//		printf("%d, ", a[i++]);
		//	}
		//	printf("\n");
		//Ex4
		//#include <stdbool.h>
		//		/* C99 only */
		//#define STACK_SIZE 100
		//		/* external variables */
		//		int contents[STACK_SIZE];
		//		int * top_ptr = 0;
		//		void make_empty(void)
		//		{
		//				*top_ptr = &contents[0];
		//		}
		//		bool is_empty(void)
		//		{
		//				return top_ptr == &contents[0];
		//		}
		//		bool is_full(void)
		//		{
		//				return top_ptr == &contents[STACK_SIZE];
		//		}
		//		void push(int i)
		//		{
		//				if (is_full())
		//						stack_overflow();
		//				else
		//						*++top_ptr = i;
		//		}
		//		int pop(void)
		//		{
		//				if (is_empty())
		//						stack_underflow();
		//				else
		//						return *top_ptr--;
		//		}

		//Ex 5
		// a is illegal because of diffrent data types
		// b is legal and true
		// c is legal and true
		// d is legal and true

		//Ex6
		//int sum_array(const int a[], int n)
		//{
		//	int sum;
		//	int const *p;
		//	sum = 0;
		//	for (p = a; a < p+n;)
		//	{
		//		sum += *(a++);
		//	}
		//	return sum;
		//}
		//
		//	int a[] = {2,3,4,5,1};
		//	printf("%d", sum_array(a, 5));
		//	return 0;


		//Ex 7
		//	bool search(const int a[], int n, int key)
		//	{
		//	  	const int * p = a;
		//			while(a < p + n)
		//			{
		//				if ( *a == key)
		//					return true;
		//				a++;
		//			}
		//			return false;
		//	}
		//	printf("Our searches trying to fgind is 2 ture %d? 7 no? %d", search(a,5, 2), search(a,5,7));

		//ex 8 its same bro
		//void store_zeros(int a[], int n)
		//{
		//	int *p;
		//	for (p = a; a < p + n; a++)
		//		*a = 0;
		//}
		//store_zeros(a,8);
		//for (int i = 0; i < 8;i++)
		//	printf("%d ", a[i]);

		//printf("\n a hass been printed boi!! \n");

		//ex9

		//const double a[] = {1, 1, 1, 1, 1, 1, 1, 1};
		//const double b[] = {2, 2, 2, 2, 2, 2, 2, 2};
		//double inner_product(const double *a, const double *b, int n)
		//{
		//	double result = 0;
		//	const double *p;
		//	for ( p = a; a < p + n;)
		//	{
		//		result += *a++ * *b++;
		//	}
		//	return result;
		//}
		//printf("result = %f\n", inner_product(a,b,8));
		//

		//ex10

		//int a[] = {1, 1, 13, 1, 1, 1, 1, 1};
		//int *find_largest(int a[], int n)
		//{
		//		int *largest;
		//		int *p;

		//		largest = a;
		//				for(p = a; a < p + n; a++)
		//				{
		//						if (*largest < *a)
		//								largest = a;
		//				}
		//		return largest;
		//}
		//printf("largest of a is my bro %d\n", *(find_largest(a,8)));

		//ex11
		//int *find_middle(int a[], int n)
		//{
		//		return a+(n/2);
		//}

		//ex12
		//Excercise 6
		//int a[] = {1, 1, 13, 12, 1, 1, 1, 1};
		//int largest;
		//int second_largest;
		//void find_two_largest(int a[], int n, int *largest, int *second_largest)
		//{
		//    bool is_second_largest = false;
		//    if (*a > *(a+1))
		//    {
		//        *largest = *a;
		//        *second_largest = *(a+1);
		//    }
		//    for (int i = 2; i < n; i++)
		//    {
		//        if (*(a+i) >= *largest)
		//        {
		//            *second_largest = *largest;
		//            *largest = *(a+i);
		//        } else if (*(a+i) > *second_largest)
		//            *second_largest = *(a+i);
		//    }
		//}
		//find_two_largest(a, 8, &largest, &second_largest);
		//printf("%d, %d\n", largest, second_largest);
		//ex13
		//#define N 10
		//		double ident[N][N];
		//		double * ptr;
		//		int count = 0;
		//		for (ptr = &ident[0][0]; ptr < &ident[N - 1][N - 1]; ptr++)
		//		{
		//			if (count == N)
		//			{
		//				*ptr = 1.0;
		//				count = 0;
		//			} else
		//			{
		//				*p = 0.0;
		//				count++;
		//			}
		//		}
		//Ex14
		//search(temperatures, 7 * 24, 32);
		//Ex15
		//int *ptr;
		//for(ptr = &temperatures[i]; ptr < &temperatures[i] + 24; ptr++)
		//	printf("%d ", *ptr)
		//Ex16
		// in loop
		// largest < find_largest(a[i], 24) ? largest = find_largest :;
		//Ex17
		//int sum_two_dimensional_array(const int a[][LEN], int n)
		//{
		//	const int *ptr;
		//	int sum = 0;
		//	for (ptr = a; ptr < a + n * LEN; ptr++)
		//		sum + = *ptr;
		//}
		//Ex18
	//	int evaluate_position(char board[8][8])
	//	{
	//			// Q,R,B,N,P
	//			int black_points;
	//			int white_points;
	//			int if_upper;
	//			int * ptr;

	//			black_points = 0;
	//			white_points = 0;
	//			for(ptr = board; ptr < board + 64; ptr++)
	//					{
	//							if_upper = isupper(*ptr);
	//							switch (*ptr))
	//							{
	//									case 'q':
	//											if(if_upper)
	//													white_points += 9;
	//											else
	//													black_points += 9;
	//											break;
	//									case 'r':
	//											if(if_upper)
	//													white_points += 5;
	//											else
	//													black_points += 5;
	//											break;
	//									case 'b':
	//											if(if_upper)
	//													white_points += 3;
	//											else
	//													black_points += 3;
	//											break;
	//									case 'n':
	//											if(if_upper)
	//													white_points += 3;
	//											else
	//													black_points += 3;
	//											break;
	//									case 'p':
	//											if(if_upper)
	//													white_points += 1;
	//											else
	//													black_points += 1;
	//											break;

	//							}

	//					}
	//			return white_points - black_points;
	//	}	
	//	return 0;
}
